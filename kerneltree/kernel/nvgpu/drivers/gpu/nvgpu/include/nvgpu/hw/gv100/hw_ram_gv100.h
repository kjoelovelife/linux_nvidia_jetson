/*
 * Copyright (c) 2017-2018, NVIDIA CORPORATION.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
/*
 * Function naming determines intended use:
 *
 *     <x>_r(void) : Returns the offset for register <x>.
 *
 *     <x>_o(void) : Returns the offset for element <x>.
 *
 *     <x>_w(void) : Returns the word offset for word (4 byte) element <x>.
 *
 *     <x>_<y>_s(void) : Returns size of field <y> of register <x> in bits.
 *
 *     <x>_<y>_f(u32 v) : Returns a value based on 'v' which has been shifted
 *         and masked to place it at field <y> of register <x>.  This value
 *         can be |'d with others to produce a full register value for
 *         register <x>.
 *
 *     <x>_<y>_m(void) : Returns a mask for field <y> of register <x>.  This
 *         value can be ~'d and then &'d to clear the value of field <y> for
 *         register <x>.
 *
 *     <x>_<y>_<z>_f(void) : Returns the constant value <z> after being shifted
 *         to place it at field <y> of register <x>.  This value can be |'d
 *         with others to produce a full register value for <x>.
 *
 *     <x>_<y>_v(u32 r) : Returns the value of field <y> from a full register
 *         <x> value 'r' after being shifted to place its LSB at bit 0.
 *         This value is suitable for direct comparison with other unshifted
 *         values appropriate for use in field <y> of register <x>.
 *
 *     <x>_<y>_<z>_v(void) : Returns the constant value for <z> defined for
 *         field <y> of register <x>.  This value is suitable for direct
 *         comparison with unshifted values appropriate for use in field <y>
 *         of register <x>.
 */
#ifndef _hw_ram_gv100_h_
#define _hw_ram_gv100_h_

static inline u32 ram_in_ramfc_s(void)
{
	return 4096U;
}
static inline u32 ram_in_ramfc_w(void)
{
	return 0U;
}
static inline u32 ram_in_page_dir_base_target_f(u32 v)
{
	return (v & 0x3U) << 0U;
}
static inline u32 ram_in_page_dir_base_target_w(void)
{
	return 128U;
}
static inline u32 ram_in_page_dir_base_target_vid_mem_f(void)
{
	return 0x0U;
}
static inline u32 ram_in_page_dir_base_target_sys_mem_coh_f(void)
{
	return 0x2U;
}
static inline u32 ram_in_page_dir_base_target_sys_mem_ncoh_f(void)
{
	return 0x3U;
}
static inline u32 ram_in_page_dir_base_vol_w(void)
{
	return 128U;
}
static inline u32 ram_in_page_dir_base_vol_true_f(void)
{
	return 0x4U;
}
static inline u32 ram_in_page_dir_base_vol_false_f(void)
{
	return 0x0U;
}
static inline u32 ram_in_page_dir_base_fault_replay_tex_f(u32 v)
{
	return (v & 0x1U) << 4U;
}
static inline u32 ram_in_page_dir_base_fault_replay_tex_m(void)
{
	return 0x1U << 4U;
}
static inline u32 ram_in_page_dir_base_fault_replay_tex_w(void)
{
	return 128U;
}
static inline u32 ram_in_page_dir_base_fault_replay_tex_true_f(void)
{
	return 0x10U;
}
static inline u32 ram_in_page_dir_base_fault_replay_gcc_f(u32 v)
{
	return (v & 0x1U) << 5U;
}
static inline u32 ram_in_page_dir_base_fault_replay_gcc_m(void)
{
	return 0x1U << 5U;
}
static inline u32 ram_in_page_dir_base_fault_replay_gcc_w(void)
{
	return 128U;
}
static inline u32 ram_in_page_dir_base_fault_replay_gcc_true_f(void)
{
	return 0x20U;
}
static inline u32 ram_in_use_ver2_pt_format_f(u32 v)
{
	return (v & 0x1U) << 10U;
}
static inline u32 ram_in_use_ver2_pt_format_m(void)
{
	return 0x1U << 10U;
}
static inline u32 ram_in_use_ver2_pt_format_w(void)
{
	return 128U;
}
static inline u32 ram_in_use_ver2_pt_format_true_f(void)
{
	return 0x400U;
}
static inline u32 ram_in_use_ver2_pt_format_false_f(void)
{
	return 0x0U;
}
static inline u32 ram_in_big_page_size_f(u32 v)
{
	return (v & 0x1U) << 11U;
}
static inline u32 ram_in_big_page_size_m(void)
{
	return 0x1U << 11U;
}
static inline u32 ram_in_big_page_size_w(void)
{
	return 128U;
}
static inline u32 ram_in_big_page_size_128kb_f(void)
{
	return 0x0U;
}
static inline u32 ram_in_big_page_size_64kb_f(void)
{
	return 0x800U;
}
static inline u32 ram_in_page_dir_base_lo_f(u32 v)
{
	return (v & 0xfffffU) << 12U;
}
static inline u32 ram_in_page_dir_base_lo_w(void)
{
	return 128U;
}
static inline u32 ram_in_page_dir_base_hi_f(u32 v)
{
	return (v & 0xffffffffU) << 0U;
}
static inline u32 ram_in_page_dir_base_hi_w(void)
{
	return 129U;
}
static inline u32 ram_in_engine_cs_w(void)
{
	return 132U;
}
static inline u32 ram_in_engine_cs_wfi_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_in_engine_cs_wfi_f(void)
{
	return 0x0U;
}
static inline u32 ram_in_engine_cs_fg_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_in_engine_cs_fg_f(void)
{
	return 0x8U;
}
static inline u32 ram_in_engine_wfi_mode_f(u32 v)
{
	return (v & 0x1U) << 2U;
}
static inline u32 ram_in_engine_wfi_mode_w(void)
{
	return 132U;
}
static inline u32 ram_in_engine_wfi_mode_physical_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_in_engine_wfi_mode_virtual_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_in_engine_wfi_target_f(u32 v)
{
	return (v & 0x3U) << 0U;
}
static inline u32 ram_in_engine_wfi_target_w(void)
{
	return 132U;
}
static inline u32 ram_in_engine_wfi_target_sys_mem_coh_v(void)
{
	return 0x00000002U;
}
static inline u32 ram_in_engine_wfi_target_sys_mem_ncoh_v(void)
{
	return 0x00000003U;
}
static inline u32 ram_in_engine_wfi_target_local_mem_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_in_engine_wfi_ptr_lo_f(u32 v)
{
	return (v & 0xfffffU) << 12U;
}
static inline u32 ram_in_engine_wfi_ptr_lo_w(void)
{
	return 132U;
}
static inline u32 ram_in_engine_wfi_ptr_hi_f(u32 v)
{
	return (v & 0xffU) << 0U;
}
static inline u32 ram_in_engine_wfi_ptr_hi_w(void)
{
	return 133U;
}
static inline u32 ram_in_engine_wfi_veid_f(u32 v)
{
	return (v & 0x3fU) << 0U;
}
static inline u32 ram_in_engine_wfi_veid_w(void)
{
	return 134U;
}
static inline u32 ram_in_eng_method_buffer_addr_lo_f(u32 v)
{
	return (v & 0xffffffffU) << 0U;
}
static inline u32 ram_in_eng_method_buffer_addr_lo_w(void)
{
	return 136U;
}
static inline u32 ram_in_eng_method_buffer_addr_hi_f(u32 v)
{
	return (v & 0x1ffffU) << 0U;
}
static inline u32 ram_in_eng_method_buffer_addr_hi_w(void)
{
	return 137U;
}
static inline u32 ram_in_sc_page_dir_base_target_f(u32 v, u32 i)
{
	return (v & 0x3U) << (0U + i*0U);
}
static inline u32 ram_in_sc_page_dir_base_target__size_1_v(void)
{
	return 0x00000040U;
}
static inline u32 ram_in_sc_page_dir_base_target_vid_mem_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_in_sc_page_dir_base_target_invalid_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_in_sc_page_dir_base_target_sys_mem_coh_v(void)
{
	return 0x00000002U;
}
static inline u32 ram_in_sc_page_dir_base_target_sys_mem_ncoh_v(void)
{
	return 0x00000003U;
}
static inline u32 ram_in_sc_page_dir_base_vol_f(u32 v, u32 i)
{
	return (v & 0x1U) << (2U + i*0U);
}
static inline u32 ram_in_sc_page_dir_base_vol__size_1_v(void)
{
	return 0x00000040U;
}
static inline u32 ram_in_sc_page_dir_base_vol_true_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_in_sc_page_dir_base_vol_false_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_f(u32 v, u32 i)
{
	return (v & 0x1U) << (4U + i*0U);
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex__size_1_v(void)
{
	return 0x00000040U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_enabled_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_disabled_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_f(u32 v, u32 i)
{
	return (v & 0x1U) << (5U + i*0U);
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc__size_1_v(void)
{
	return 0x00000040U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_enabled_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_disabled_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_in_sc_use_ver2_pt_format_f(u32 v, u32 i)
{
	return (v & 0x1U) << (10U + i*0U);
}
static inline u32 ram_in_sc_use_ver2_pt_format__size_1_v(void)
{
	return 0x00000040U;
}
static inline u32 ram_in_sc_use_ver2_pt_format_false_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_in_sc_use_ver2_pt_format_true_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_in_sc_big_page_size_f(u32 v, u32 i)
{
	return (v & 0x1U) << (11U + i*0U);
}
static inline u32 ram_in_sc_big_page_size__size_1_v(void)
{
	return 0x00000040U;
}
static inline u32 ram_in_sc_big_page_size_64kb_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_in_sc_page_dir_base_lo_f(u32 v, u32 i)
{
	return (v & 0xfffffU) << (12U + i*0U);
}
static inline u32 ram_in_sc_page_dir_base_lo__size_1_v(void)
{
	return 0x00000040U;
}
static inline u32 ram_in_sc_page_dir_base_hi_f(u32 v, u32 i)
{
	return (v & 0xffffffffU) << (0U + i*0U);
}
static inline u32 ram_in_sc_page_dir_base_hi__size_1_v(void)
{
	return 0x00000040U;
}
static inline u32 ram_in_sc_page_dir_base_target_0_f(u32 v)
{
	return (v & 0x3U) << 0U;
}
static inline u32 ram_in_sc_page_dir_base_target_0_w(void)
{
	return 168U;
}
static inline u32 ram_in_sc_page_dir_base_vol_0_f(u32 v)
{
	return (v & 0x1U) << 2U;
}
static inline u32 ram_in_sc_page_dir_base_vol_0_w(void)
{
	return 168U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_0_f(u32 v)
{
	return (v & 0x1U) << 4U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_tex_0_w(void)
{
	return 168U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_0_f(u32 v)
{
	return (v & 0x1U) << 5U;
}
static inline u32 ram_in_sc_page_dir_base_fault_replay_gcc_0_w(void)
{
	return 168U;
}
static inline u32 ram_in_sc_use_ver2_pt_format_0_f(u32 v)
{
	return (v & 0x1U) << 10U;
}
static inline u32 ram_in_sc_use_ver2_pt_format_0_w(void)
{
	return 168U;
}
static inline u32 ram_in_sc_big_page_size_0_f(u32 v)
{
	return (v & 0x1U) << 11U;
}
static inline u32 ram_in_sc_big_page_size_0_w(void)
{
	return 168U;
}
static inline u32 ram_in_sc_page_dir_base_lo_0_f(u32 v)
{
	return (v & 0xfffffU) << 12U;
}
static inline u32 ram_in_sc_page_dir_base_lo_0_w(void)
{
	return 168U;
}
static inline u32 ram_in_sc_page_dir_base_hi_0_f(u32 v)
{
	return (v & 0xffffffffU) << 0U;
}
static inline u32 ram_in_sc_page_dir_base_hi_0_w(void)
{
	return 169U;
}
static inline u32 ram_in_base_shift_v(void)
{
	return 0x0000000cU;
}
static inline u32 ram_in_alloc_size_v(void)
{
	return 0x00001000U;
}
static inline u32 ram_fc_size_val_v(void)
{
	return 0x00000200U;
}
static inline u32 ram_fc_gp_put_w(void)
{
	return 0U;
}
static inline u32 ram_fc_userd_w(void)
{
	return 2U;
}
static inline u32 ram_fc_userd_hi_w(void)
{
	return 3U;
}
static inline u32 ram_fc_signature_w(void)
{
	return 4U;
}
static inline u32 ram_fc_gp_get_w(void)
{
	return 5U;
}
static inline u32 ram_fc_pb_get_w(void)
{
	return 6U;
}
static inline u32 ram_fc_pb_get_hi_w(void)
{
	return 7U;
}
static inline u32 ram_fc_pb_top_level_get_w(void)
{
	return 8U;
}
static inline u32 ram_fc_pb_top_level_get_hi_w(void)
{
	return 9U;
}
static inline u32 ram_fc_acquire_w(void)
{
	return 12U;
}
static inline u32 ram_fc_sem_addr_hi_w(void)
{
	return 14U;
}
static inline u32 ram_fc_sem_addr_lo_w(void)
{
	return 15U;
}
static inline u32 ram_fc_sem_payload_lo_w(void)
{
	return 16U;
}
static inline u32 ram_fc_sem_payload_hi_w(void)
{
	return 39U;
}
static inline u32 ram_fc_sem_execute_w(void)
{
	return 17U;
}
static inline u32 ram_fc_gp_base_w(void)
{
	return 18U;
}
static inline u32 ram_fc_gp_base_hi_w(void)
{
	return 19U;
}
static inline u32 ram_fc_gp_fetch_w(void)
{
	return 20U;
}
static inline u32 ram_fc_pb_fetch_w(void)
{
	return 21U;
}
static inline u32 ram_fc_pb_fetch_hi_w(void)
{
	return 22U;
}
static inline u32 ram_fc_pb_put_w(void)
{
	return 23U;
}
static inline u32 ram_fc_pb_put_hi_w(void)
{
	return 24U;
}
static inline u32 ram_fc_pb_header_w(void)
{
	return 33U;
}
static inline u32 ram_fc_pb_count_w(void)
{
	return 34U;
}
static inline u32 ram_fc_subdevice_w(void)
{
	return 37U;
}
static inline u32 ram_fc_target_w(void)
{
	return 43U;
}
static inline u32 ram_fc_hce_ctrl_w(void)
{
	return 57U;
}
static inline u32 ram_fc_chid_w(void)
{
	return 58U;
}
static inline u32 ram_fc_chid_id_f(u32 v)
{
	return (v & 0xfffU) << 0U;
}
static inline u32 ram_fc_chid_id_w(void)
{
	return 0U;
}
static inline u32 ram_fc_config_w(void)
{
	return 61U;
}
static inline u32 ram_fc_runlist_timeslice_w(void)
{
	return 62U;
}
static inline u32 ram_fc_set_channel_info_w(void)
{
	return 63U;
}
static inline u32 ram_userd_base_shift_v(void)
{
	return 0x00000009U;
}
static inline u32 ram_userd_chan_size_v(void)
{
	return 0x00000200U;
}
static inline u32 ram_userd_put_w(void)
{
	return 16U;
}
static inline u32 ram_userd_get_w(void)
{
	return 17U;
}
static inline u32 ram_userd_ref_w(void)
{
	return 18U;
}
static inline u32 ram_userd_put_hi_w(void)
{
	return 19U;
}
static inline u32 ram_userd_ref_threshold_w(void)
{
	return 20U;
}
static inline u32 ram_userd_top_level_get_w(void)
{
	return 22U;
}
static inline u32 ram_userd_top_level_get_hi_w(void)
{
	return 23U;
}
static inline u32 ram_userd_get_hi_w(void)
{
	return 24U;
}
static inline u32 ram_userd_gp_get_w(void)
{
	return 34U;
}
static inline u32 ram_userd_gp_put_w(void)
{
	return 35U;
}
static inline u32 ram_userd_gp_top_level_get_w(void)
{
	return 22U;
}
static inline u32 ram_userd_gp_top_level_get_hi_w(void)
{
	return 23U;
}
static inline u32 ram_rl_entry_size_v(void)
{
	return 0x00000010U;
}
static inline u32 ram_rl_entry_type_f(u32 v)
{
	return (v & 0x1U) << 0U;
}
static inline u32 ram_rl_entry_type_channel_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_rl_entry_type_tsg_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_rl_entry_id_f(u32 v)
{
	return (v & 0xfffU) << 0U;
}
static inline u32 ram_rl_entry_chan_runqueue_selector_f(u32 v)
{
	return (v & 0x1U) << 1U;
}
static inline u32 ram_rl_entry_chan_inst_target_f(u32 v)
{
	return (v & 0x3U) << 4U;
}
static inline u32 ram_rl_entry_chan_inst_target_sys_mem_ncoh_v(void)
{
	return 0x00000003U;
}
static inline u32 ram_rl_entry_chan_inst_target_sys_mem_coh_v(void)
{
	return 0x00000002U;
}
static inline u32 ram_rl_entry_chan_inst_target_vid_mem_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_rl_entry_chan_userd_target_f(u32 v)
{
	return (v & 0x3U) << 6U;
}
static inline u32 ram_rl_entry_chan_userd_target_vid_mem_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_rl_entry_chan_userd_target_vid_mem_nvlink_coh_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_rl_entry_chan_userd_target_sys_mem_coh_v(void)
{
	return 0x00000002U;
}
static inline u32 ram_rl_entry_chan_userd_target_sys_mem_ncoh_v(void)
{
	return 0x00000003U;
}
static inline u32 ram_rl_entry_chan_userd_ptr_lo_f(u32 v)
{
	return (v & 0xffffffU) << 8U;
}
static inline u32 ram_rl_entry_chan_userd_ptr_hi_f(u32 v)
{
	return (v & 0xffffffffU) << 0U;
}
static inline u32 ram_rl_entry_chid_f(u32 v)
{
	return (v & 0xfffU) << 0U;
}
static inline u32 ram_rl_entry_chan_inst_ptr_lo_f(u32 v)
{
	return (v & 0xfffffU) << 12U;
}
static inline u32 ram_rl_entry_chan_inst_ptr_hi_f(u32 v)
{
	return (v & 0xffffffffU) << 0U;
}
static inline u32 ram_rl_entry_tsg_timeslice_scale_f(u32 v)
{
	return (v & 0xfU) << 16U;
}
static inline u32 ram_rl_entry_tsg_timeslice_scale_3_v(void)
{
	return 0x00000003U;
}
static inline u32 ram_rl_entry_tsg_timeslice_timeout_f(u32 v)
{
	return (v & 0xffU) << 24U;
}
static inline u32 ram_rl_entry_tsg_timeslice_timeout_128_v(void)
{
	return 0x00000080U;
}
static inline u32 ram_rl_entry_tsg_length_f(u32 v)
{
	return (v & 0xffU) << 0U;
}
static inline u32 ram_rl_entry_tsg_length_init_v(void)
{
	return 0x00000000U;
}
static inline u32 ram_rl_entry_tsg_length_min_v(void)
{
	return 0x00000001U;
}
static inline u32 ram_rl_entry_tsg_length_max_v(void)
{
	return 0x00000080U;
}
static inline u32 ram_rl_entry_tsg_tsgid_f(u32 v)
{
	return (v & 0xfffU) << 0U;
}
static inline u32 ram_rl_entry_chan_userd_ptr_align_shift_v(void)
{
	return 0x00000008U;
}
static inline u32 ram_rl_entry_chan_userd_align_shift_v(void)
{
	return 0x00000008U;
}
static inline u32 ram_rl_entry_chan_inst_ptr_align_shift_v(void)
{
	return 0x0000000cU;
}
#endif
