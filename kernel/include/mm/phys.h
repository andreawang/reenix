#pragma once
#include "multiboot.h"

// This is a physical address of some information the boot loader gives
// us. It should only be used by phys_detect_highmem.
multiboot_info_t *boot_info;

/* Returns the highest physical address of the range of usable
 * that start at kernel_start. The intention is that this will
 * be the largest available continuous range of physical
 * addresses. This function should only be used during booting
 * while the first megabyte of memory is identity mapped,
 * otherwise its behavior is undefined. */
uintptr_t phys_detect_highmem();
