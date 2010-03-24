/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fnative-types`
 */

#ifndef	_JoinGameAck_H_
#define	_JoinGameAck_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PlayerInfoRights.h"
#include "NetGameInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* JoinGameAck */
typedef struct JoinGameAck {
	PlayerInfoRights_t	 yourRights;
	NetGameInfo_t	 gameInfo;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} JoinGameAck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_JoinGameAck;

#ifdef __cplusplus
}
#endif

#endif	/* _JoinGameAck_H_ */
