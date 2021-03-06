
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

#include "algo_suite.h"

#include "algos_enc.h"
#include "algos_sig.h"

void fill_algorithm_suite (algorithm_suite&s)
{
#define do_alg(x) static x var_##x ; var_##x.register_into_suite(s);

#if HAVE_CRYPTOPP==1
	do_alg (algo_mceqd128);
	do_alg (algo_mceqd192);
	do_alg (algo_mceqd256);
	do_alg (algo_mceqd128cha);
	do_alg (algo_mceqd192cha);
	do_alg (algo_mceqd256cha);
	do_alg (algo_mceqd128xs);
	do_alg (algo_mceqd192xs);
	do_alg (algo_mceqd256xs);
	do_alg (algo_fmtseq128);
	do_alg (algo_fmtseq192);
	do_alg (algo_fmtseq256);
	do_alg (algo_fmtseq128h20);
	do_alg (algo_fmtseq192h20);
	do_alg (algo_fmtseq256h20);
#endif //HAVE_CRYPTOPP==1

	do_alg (algo_mceqd128cube);
	do_alg (algo_mceqd192cube);
	do_alg (algo_mceqd256cube);
	do_alg (algo_mceqd128cubecha);
	do_alg (algo_mceqd192cubecha);
	do_alg (algo_mceqd256cubecha);
	do_alg (algo_mceqd128cubexs);
	do_alg (algo_mceqd192cubexs);
	do_alg (algo_mceqd256cubexs);
	do_alg (algo_fmtseq128cube);
	do_alg (algo_fmtseq192cube);
	do_alg (algo_fmtseq256cube);
	do_alg (algo_fmtseq128h20cube);
	do_alg (algo_fmtseq192h20cube);
	do_alg (algo_fmtseq256h20cube);
#undef do_alg
}
