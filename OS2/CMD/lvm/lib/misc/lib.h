/*
 * Copyright (C) 2001-2004 Sistina Software, Inc. All rights reserved.
 * Copyright (C) 2004 Red Hat, Inc. All rights reserved.
 *
 * This file is part of LVM2.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU General Public License v.2.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * This file must be included first by every library source file.
 */
#ifndef _LVM_LIB_H
#define _LVM_LIB_H

#include "configure.h"

#define _REENTRANT
#define _GNU_SOURCE
#define _FILE_OFFSET_BITS 64

#include "log.h"
#include "intl.h"
#include "lvm-types.h"
#include "lvm-wrappers.h"

#ifdef DEVMAPPER_SUPPORT
#include <libdevmapper.h>
#endif

#endif
