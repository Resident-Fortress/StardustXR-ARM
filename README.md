# StarDustXR-RPi5
Attempting to run StarDust XR on a Raspberry Pi 5.

This Repository doesn't represent the final version and should only be used in Debug for now!

I recently started poking around VR display servers for Linux and found StarDust. This took about two days of poking around and figuring out what needs to be patched for StarDust to hopefully run on the Pi 5.

## Installation Guide

First of all, you'd want to follow the guides on installing:

- **WiVRn:** It already packages Monado as a dependency (I highly go against using this package; I'll explain why later).
- **Monado:** The OpenXR Platform.
- **StarDust XR:** The Display Server itself.

## Why not use WiVRn's Monado?
Since it doesn't appear until after you run CMAKE you're gonna want to have at least some sorta existing implementation of Monado without losing the modifications.

## Modifications

So what modifications are needed to make this semi-work?

Well, Monado uses a `VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT` that isn't supported on the hardware of the Pi 5. In testing, we see that StarDust complains and crashes alongside StereoKit.

To fix this, we have to grab Monado source from GitLab and make a modification. You do this by going into monado/src/xrt/auxiliary/vk/vk_bundle_init.c`. In this file, you have to find:

Line 274 VkFormat image_format = depth ? VK_FORMAT_D16_UNORM : VK_FORMAT_R16G16B16A16_UNORM;

After this modification is done, build Monado, and it shouldn't put up a fuss.

Proceed to open `WiVRn/server/driver/yup_converter.cpp` and find this string on Line 56:

if (!vk_buffer_init(vk, extent.height * bundle.stride, VK_BUFFER_USAGE_TRANSFER_DST_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT | VK_MEMORY_PROPERTY_HOST_CACHED_BIT, &bundle.buffer, &bundle.buffer_memory))


Remove `VK_MEMORY_PROPERTY_HOST_CACHED_BIT`. It should look like this:

if (!vk_buffer_init(vk, extent.height * bundle.stride, VK_BUFFER_USAGE_TRANSFER_DST_BIT, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT, &bundle.buffer, &bundle.buffer_memory))

Afterwards, build WiVRn. If it replaces Monado-Service, just rebuild it or modify the `_deps/monado-src/src/xrt/auxiliary/vk/vk_bundle_init` and repeat the top step on Line 274.

After all of that, you should be able to run StarDustXR. The only issue is that the older version of StereoKit is not working properly as of 1/17/2024. So you'd have to wait.

I'll be making a repo with prebuilt binaries later if possible. Also, this Gist will be updated as I keep working on modifying this wackjob of spaghetti.

## Credits

Credits to these fine folks for helping me:

- Nova King (technobaboo)
- Someone Somewhere (someonesomewhere)
- galister (galister)
- koujaku (Nick K) (.koujaku)
