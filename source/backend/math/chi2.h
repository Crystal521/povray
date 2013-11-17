/*******************************************************************************
 * chi2.h
 *
 * This module contains all defines, typedefs, and prototypes for CHI2.CPP.
 *
 * ---------------------------------------------------------------------------
 * UberPOV Raytracer version 1.37.
 * Partial Copyright 2013 Christoph Lipka.
 *
 * UberPOV 1.37 is an experimental unofficial branch of POV-Ray 3.7, and is
 * subject to the same licensing terms and conditions.
 * ---------------------------------------------------------------------------
 * Persistence of Vision Ray Tracer ('POV-Ray') version 3.7.
 * Copyright 1991-2013 Persistence of Vision Raytracer Pty. Ltd.
 *
 * POV-Ray is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * POV-Ray is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * ---------------------------------------------------------------------------
 * POV-Ray is based on the popular DKB raytracer version 2.12.
 * DKBTrace was originally written by David K. Buck.
 * DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
 * ---------------------------------------------------------------------------
 * $File: //depot/clipka/upov/source/backend/math/chi2.h $
 * $Revision: #2 $
 * $Change: 5948 $
 * $DateTime: 2013/07/22 20:36:31 $
 * $Author: clipka $
 *******************************************************************************/

#ifndef CHI2_H
#define CHI2_H

namespace pov
{

/*****************************************************************************
* Global preprocessor defines
******************************************************************************/

/*****************************************************************************
* Global typedefs
******************************************************************************/

/*****************************************************************************
* Global variables
******************************************************************************/

/*****************************************************************************
* Global functions
******************************************************************************/

DBL chdtri (DBL df, DBL x);

// quantile function (inverse of the cumulative distribution function) of the standard normal distribution,
// aka "probit function"
DBL ndtri (DBL y0);

}

#endif
