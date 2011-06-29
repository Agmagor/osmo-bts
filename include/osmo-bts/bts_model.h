#ifndef BTS_MODEL_H
#define BTS_MODEL_H

#include <stdint.h>

#include <osmocom/gsm/tlv.h>
#include <osmocom/gsm/gsm_utils.h>

#include <osmo-bts/gsm_data.h>

/* BTS model specific functions needed by the common code */

int bts_model_init(struct gsm_bts *bts);

struct gsm_time *bts_model_get_time(struct gsm_bts *bts);

int bts_model_check_oml(struct gsm_bts *bts, uint8_t msg_type,
			struct tlv_parsed *old_attr, struct tlv_parsed *new_attr,
			void *obj);

int bts_model_apply_oml(struct gsm_bts *bts, struct msgb *msg,
			struct tlv_parsed *new_attr, void *obj);

int bts_model_opstart(struct gsm_bts *bts, struct gsm_abis_mo *mo,
		      void *obj);

int bts_model_chg_adm_state(struct gsm_bts *bts, struct gsm_abis_mo *mo,
			    void *obj, uint8_t adm_state);

int bts_model_rsl_chan_act(struct gsm_lchan *lchan, struct tlv_parsed *tp);
int bts_model_rsl_chan_rel(struct gsm_lchan *lchan);
int bts_model_rsl_deact_sacch(struct gsm_lchan *lchan);

#endif