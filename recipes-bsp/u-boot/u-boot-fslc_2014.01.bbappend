FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"
SRC_URI += "\
	file://0001_Fix-compilation.patch \
	file://0002_Add-mx6dltrizeps7pconxs-config.patch \
	file://0003_Add-mx6dltrizeps7pconxs-board.patch \
	file://0004_Add-mx6dltrizeps7pconxs-to-boards.patch \
	file://0005_Enhance-smsc-lan8710-driver.patch \
"
