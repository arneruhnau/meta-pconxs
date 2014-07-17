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
	file://0001-Added-sdma-firmware.patch \
	file://0002-Initial-device-tree-support.patch \
	file://0003-Added-GPU-driver-for-the-galcore.patch \
	file://0004-Add-GPU-to-the-device-tree.patch \
	file://0005-Added-Vivante-DRM-patch.patch \
	file://0006-Removed-unused-interrupt.patch \
	file://0007-Applied-patch-to-correct-the-clock-chain-driving-pci.patch \
	file://0008-Cross-checked-USDHC-properties-with-board-initializa.patch \
	file://0009-Undo-accidental-inclusion-of-old-asrc-driver.patch \
	file://0010-Added-origin-of-the-sdma-firmware-to-WHENCE.patch \
	file://0011-Initial-support-for-the-WLAN-module.patch \
	file://0012-Added-reset-shutdown-gpios-to-the-wlan-module.patch \
	file://0013-Make-implicit-default-of-backlight-gpio-explicit.patch \
	file://0014-Remove-usdhc2-for-now.-In-this-configuration-it-caus.patch \
"
SRCREV="${AUTOREV}"

LOCALVERSION = "-target"
