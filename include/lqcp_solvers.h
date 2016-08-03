/**************************************************************************************************
*                                                                                                 *
* This file is part of HPMPC.                                                                     *
*                                                                                                 *
* HPMPC -- Library for High-Performance implementation of solvers for MPC.                        *
* Copyright (C) 2014-2015 by Technical University of Denmark. All rights reserved.                *
*                                                                                                 *
* HPMPC is free software; you can redistribute it and/or                                          *
* modify it under the terms of the GNU Lesser General Public                                      *
* License as published by the Free Software Foundation; either                                    *
* version 2.1 of the License, or (at your option) any later version.                              *
*                                                                                                 *
* HPMPC is distributed in the hope that it will be useful,                                        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            *
* See the GNU Lesser General Public License for more details.                                     *
*                                                                                                 *
* You should have received a copy of the GNU Lesser General Public                                *
* License along with HPMPC; if not, write to the Free Software                                    *
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  *
*                                                                                                 *
* Author: Gianluca Frison, giaf (at) dtu.dk                                                       *
*                                                                                                 *
**************************************************************************************************/

// work space size
int d_back_ric_rec_sv_tv_work_space_size_bytes(int N, int *nx, int *nu, int *nb, int *ng);
int d_back_ric_rec_sv_tv_memory_space_size_bytes(int N, int *nx, int *nu, int *nb, int *ng);

// Backward Riccati recursion
void d_back_ric_rec_sv_tv_res(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, int update_b, double **hpBAbt, double **b, int update_q, double **hpQ, double **q, double **bd, double **hpDCt, double **Qx, double **qx, double **hux, int compute_pi, double **hpi, int compute_Pb, double **hPb, double *memory, double *work);
void d_back_ric_rec_trf_tv_res(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, double **hpBAbt, double **hpQ, double **hpDCt, double **Qx, double **bd, double *memory, double *work);
void d_back_ric_rec_trs_tv_res(int N, int *nx, int *nu, int *nb, int **idxb, int *ng, double **hpBAbt, double **hb, double **hq, double **hpDCt, double **qx, double **hux, int compute_pi, double **hpi, int compute_Pb, double **hPb, double *memory, double *work);

