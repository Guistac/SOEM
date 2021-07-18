/*
 * Licensed under the GNU General Public License version 2 with exceptions. See
 * LICENSE file in the project root for full license information
 */

/** \file
 * \brief
 * Headerfile for all ethercat headers
 */

#ifndef _EC_ETHERCAT_H
#define _EC_ETHERCAT_H

#include "ethercattype.h"
#include <nicdrv.h> //Changed to <> brackets because the file is in a different include directory than ethercat.h
#include "ethercatbase.h"
#include "ethercatmain.h"
#include "ethercatdc.h"
#include "ethercatcoe.h"
#include "ethercatfoe.h"
#include "ethercatsoe.h"
#include "ethercateoe.h"
#include "ethercatconfig.h"
#include "ethercatprint.h"

#ifdef inline
#undef inline
#endif

#endif /* _EC_ETHERCAT_H */
