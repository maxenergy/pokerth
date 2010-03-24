/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fnative-types`
 */

#include <asn_internal.h>

#include "NetGameInfo.h"

static int
memb_raiseEveryHands_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 1000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_raiseEveryMinutes_constraint_4(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 1000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
endRaiseMode_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
endRaiseMode_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
endRaiseMode_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	endRaiseMode_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
endRaiseMode_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	endRaiseMode_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
endRaiseMode_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	endRaiseMode_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
endRaiseMode_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	endRaiseMode_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
endRaiseMode_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	endRaiseMode_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
endRaiseMode_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	endRaiseMode_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static int
memb_NativeInteger_constraint_18(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 20001)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_gameName_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: UTF-8: broken encoding (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((size >= 1 && size <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_maxNumPlayers_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_proposedGuiSpeed_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 11)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_delayBetweenHands_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5 && value <= 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_playerActionTimeout_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 5 && value <= 60)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_firstSmallBlind_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 20000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_endRaiseSmallBlindValue_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 20000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startMoney_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 1000000)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_manualBlinds_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size <= 30)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_raiseIntervalMode_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct raiseIntervalMode, choice.raiseEveryHands),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_raiseEveryHands_constraint_4,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"raiseEveryHands"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct raiseIntervalMode, choice.raiseEveryMinutes),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_raiseEveryMinutes_constraint_4,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"raiseEveryMinutes"
		},
};
static asn_TYPE_tag2member_t asn_MAP_raiseIntervalMode_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* raiseEveryHands at 309 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* raiseEveryMinutes at 310 */
};
static asn_CHOICE_specifics_t asn_SPC_raiseIntervalMode_specs_4 = {
	sizeof(struct raiseIntervalMode),
	offsetof(struct raiseIntervalMode, _asn_ctx),
	offsetof(struct raiseIntervalMode, present),
	sizeof(((struct raiseIntervalMode *)0)->present),
	asn_MAP_raiseIntervalMode_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_raiseIntervalMode_4 = {
	"raiseIntervalMode",
	"raiseIntervalMode",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_raiseIntervalMode_4,
	2,	/* Elements count */
	&asn_SPC_raiseIntervalMode_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_endRaiseMode_value2enum_8[] = {
	{ 1,	12,	"doubleBlinds" },
	{ 2,	15,	"raiseByEndValue" },
	{ 3,	13,	"keepLastBlind" }
};
static unsigned int asn_MAP_endRaiseMode_enum2value_8[] = {
	0,	/* doubleBlinds(1) */
	2,	/* keepLastBlind(3) */
	1	/* raiseByEndValue(2) */
};
static asn_INTEGER_specifics_t asn_SPC_endRaiseMode_specs_8 = {
	asn_MAP_endRaiseMode_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_endRaiseMode_enum2value_8,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_endRaiseMode_tags_8[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_endRaiseMode_8 = {
	"endRaiseMode",
	"endRaiseMode",
	endRaiseMode_8_free,
	endRaiseMode_8_print,
	endRaiseMode_8_constraint,
	endRaiseMode_8_decode_ber,
	endRaiseMode_8_encode_der,
	endRaiseMode_8_decode_xer,
	endRaiseMode_8_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_endRaiseMode_tags_8,
	sizeof(asn_DEF_endRaiseMode_tags_8)
		/sizeof(asn_DEF_endRaiseMode_tags_8[0]), /* 1 */
	asn_DEF_endRaiseMode_tags_8,	/* Same as above */
	sizeof(asn_DEF_endRaiseMode_tags_8)
		/sizeof(asn_DEF_endRaiseMode_tags_8[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* Defined elsewhere */
	&asn_SPC_endRaiseMode_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_manualBlinds_18[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_NativeInteger_constraint_18,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_manualBlinds_tags_18[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_manualBlinds_specs_18 = {
	sizeof(struct manualBlinds),
	offsetof(struct manualBlinds, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_manualBlinds_18 = {
	"manualBlinds",
	"manualBlinds",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_manualBlinds_tags_18,
	sizeof(asn_DEF_manualBlinds_tags_18)
		/sizeof(asn_DEF_manualBlinds_tags_18[0]), /* 1 */
	asn_DEF_manualBlinds_tags_18,	/* Same as above */
	sizeof(asn_DEF_manualBlinds_tags_18)
		/sizeof(asn_DEF_manualBlinds_tags_18[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_manualBlinds_18,
	1,	/* Single element */
	&asn_SPC_manualBlinds_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NetGameInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, gameName),
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_UTF8String,
		memb_gameName_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, maxNumPlayers),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_maxNumPlayers_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"maxNumPlayers"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, raiseIntervalMode),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_raiseIntervalMode_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"raiseIntervalMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, endRaiseMode),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_endRaiseMode_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"endRaiseMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, proposedGuiSpeed),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_proposedGuiSpeed_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"proposedGuiSpeed"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, delayBetweenHands),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_delayBetweenHands_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"delayBetweenHands"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, playerActionTimeout),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_playerActionTimeout_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerActionTimeout"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, firstSmallBlind),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_firstSmallBlind_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"firstSmallBlind"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, endRaiseSmallBlindValue),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_endRaiseSmallBlindValue_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"endRaiseSmallBlindValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, startMoney),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_startMoney_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"startMoney"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NetGameInfo, manualBlinds),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_manualBlinds_18,
		memb_manualBlinds_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"manualBlinds"
		},
};
static ber_tlv_tag_t asn_DEF_NetGameInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NetGameInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 6 }, /* maxNumPlayers at 307 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -1, 5 }, /* proposedGuiSpeed at 317 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 5, -2, 4 }, /* delayBetweenHands at 318 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 6, -3, 3 }, /* playerActionTimeout at 319 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 7, -4, 2 }, /* firstSmallBlind at 320 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 8, -5, 1 }, /* endRaiseSmallBlindValue at 321 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 9, -6, 0 }, /* startMoney at 322 */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 3, 0, 0 }, /* endRaiseMode at 313 */
    { (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 0, 0, 0 }, /* gameName at 306 */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, 0, 0 }, /* manualBlinds at 323 */
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 2, 0, 0 }, /* raiseEveryHands at 309 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 2, 0, 0 } /* raiseEveryMinutes at 310 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NetGameInfo_specs_1 = {
	sizeof(struct NetGameInfo),
	offsetof(struct NetGameInfo, _asn_ctx),
	asn_MAP_NetGameInfo_tag2el_1,
	12,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	10,	/* Start extensions */
	12	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NetGameInfo = {
	"NetGameInfo",
	"NetGameInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NetGameInfo_tags_1,
	sizeof(asn_DEF_NetGameInfo_tags_1)
		/sizeof(asn_DEF_NetGameInfo_tags_1[0]), /* 1 */
	asn_DEF_NetGameInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NetGameInfo_tags_1)
		/sizeof(asn_DEF_NetGameInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NetGameInfo_1,
	11,	/* Elements count */
	&asn_SPC_NetGameInfo_specs_1	/* Additional specs */
};

