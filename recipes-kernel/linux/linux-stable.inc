LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"
DEPENDS += "lzop-native bc-native"
PROVIDES = "virtual/kernel linux-mainline"         

inherit kernel
require recipes-kernel/linux/linux-imx.inc
require recipes-kernel/linux/linux-dtb.inc

SRCBRANCH ?= "linux-${PV}.y"

SRC_URI = "git://git.kernel.org/pub/scm/linux/kernel/git/stable/linux-stable.git;protocol=git;branch=${SRCBRANCH} \
	file://defconfig \
	file://pcie-clock.patch \
	file://devicetree.patch \
	file://sdma-firmware.patch \
	file://galcore.patch \
	file://enable-gpu.patch \
	file://vivante/0001-ENGR00240988-drm-copy-vivante-driver-from-3.5.7-kern.patch \
	file://vivante/0002-ENGR00240988-drm-vivante-remove-reclaim_buffers-call.patch \
	file://vivante/0003-drm-vivante-build-fixes.patch \
	file://vivante/0004-Fixed-vivante-driver-for-kernel-3.14.x.patch \
"
SRCREV="${AUTOREV}"

LOCALVERSION = "-target"
