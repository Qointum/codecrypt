

/*
 * This file is part of Codecrypt.
 *
 * Codecrypt is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or (at
 * your option) any later version.
 *
 * Codecrypt is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Codecrypt. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ccr_rmd_hash_h_
#define _ccr_rmd_hash_h_

#if HAVE_CRYPTOPP==1

#include "sha_hash.h"
#include <crypto++/ripemd.h>

//it's used just like SHA, so create it from SHA
class rmd128hash : public shahash<CryptoPP::RIPEMD128> {};
class rmd128proc : public shaproc<CryptoPP::RIPEMD128> {};

#endif //HAVE_CRYPTOPP==1

#endif
