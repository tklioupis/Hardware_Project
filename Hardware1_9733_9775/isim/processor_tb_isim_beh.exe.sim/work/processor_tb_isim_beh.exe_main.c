/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_16985711996766934131_0132817699_init();
    work_m_09225718799102242767_1945286206_init();
    work_m_09522637549210385232_2220189930_init();
    work_m_14939966681795108799_0024821643_init();
    work_m_16985711996766934131_2527833740_init();
    work_m_15492650796130332728_3069169239_init();
    work_m_17827390074819980230_3913188552_init();
    work_m_06256186185280387117_2647300957_init();
    work_m_03538165881811903362_1621107508_init();
    work_m_11402908202637390783_3572813622_init();
    work_m_06733973125140067056_2725559894_init();
    work_m_17369676140734119803_3691209991_init();
    work_m_16605281217348254465_0450250084_init();
    work_m_17299645505728113946_4054955373_init();
    work_m_18410979828867285460_3027548060_init();
    work_m_17342314434912785412_3037777339_init();
    work_m_01321582188341305747_1667949733_init();
    work_m_02671360545902963331_1600815965_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_02671360545902963331_1600815965");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
