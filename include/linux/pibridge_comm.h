#ifndef _PIBRIDGE_COMM_H
#define _PIBRIDGE_COMM_H

#include <linux/types.h>

int pibridge_req_io(u8 addr, u8 cmd, void *snd_buf, u8 snd_len, void *rcv_buf,
		    u8 rcv_len);
int pibridge_req_send_io(u8 addr, u8 cmd, void *snd_buf, u8 snd_len);
int pibridge_req_gate(u8 dst, u16 cmd, void *snd_buf, u8 snd_len,
		      void *rcv_buf, u8 rcv_len);
int pibridge_req_gate_tmt(u8 dst, u16 cmd, void *snd_buf, u8 snd_len,
			  void *rcv_buf, u8 rcv_len, u16 tmt);
int pibridge_req_send_gate(u8 dst, u16 cmd, void *snd_buf, u8 snd_len);
int pibridge_recv(void *buf, u8 len);
int pibridge_recv_timeout(void *buf, u8 len, u16 timeout);
int pibridge_send(void *buf, u32 len);
void pibridge_clear_fifo(void);
#endif	/* _PIBRIDGE_COMM_H */
