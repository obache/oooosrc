$NetBSD: patch-tools_qemu-xen-traditional_hw_pt-msi.h,v 1.1 2021/04/18 12:31:26 bouyer Exp $

--- tools/qemu-xen-traditional/hw/pt-msi.h.orig	2014-10-06 17:50:24.000000000 +0200
+++ tools/qemu-xen-traditional/hw/pt-msi.h	2015-01-19 13:16:38.000000000 +0100
@@ -1,7 +1,6 @@
 #ifndef _PT_MSI_H
 #define _PT_MSI_H
 
-#include "pci/pci.h"
 #include "pass-through.h"
 
 #define  PCI_CAP_ID_MSI     0x05    /* Message Signalled Interrupts */
