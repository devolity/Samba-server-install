/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_nbt
#define _PIDL_HEADER_nbt

#include <stdint.h>

#include <core/ntstatus.h>

#include <gen_ndr/misc.h>
#include <gen_ndr/security.h>
#ifndef _HEADER_nbt
#define _HEADER_nbt

#define NBT_NAME_SERVICE_PORT	( 137 )
#define NBT_DGRAM_SERVICE_PORT	( 138 )
#define NBT_MAILSLOT_NETLOGON	( "\\MAILSLOT\\NET\\NETLOGON" )
#define NBT_MAILSLOT_NTLOGON	( "\\MAILSLOT\\NET\\NTLOGON" )
#define NBT_MAILSLOT_GETDC	( "\\MAILSLOT\\NET\\GETDC" )
#define NBT_MAILSLOT_BROWSE	( "\\MAILSLOT\\BROWSE" )
#define DGRAM_SMB	( 0xff534d42 )
/* bitmap nbt_operation */
#define NBT_RCODE ( 0x000F )
#define NBT_FLAG_BROADCAST ( 0x0010 )
#define NBT_FLAG_RECURSION_AVAIL ( 0x0080 )
#define NBT_FLAG_RECURSION_DESIRED ( 0x0100 )
#define NBT_FLAG_TRUNCATION ( 0x0200 )
#define NBT_FLAG_AUTHORITATIVE ( 0x0400 )
#define NBT_OPCODE ( 0x7800 )
#define NBT_FLAG_REPLY ( 0x8000 )

enum nbt_opcode
#ifndef USE_UINT_ENUMS
 {
	NBT_OPCODE_QUERY=(int)((0x0<<11)),
	NBT_OPCODE_REGISTER=(int)((0x5<<11)),
	NBT_OPCODE_RELEASE=(int)((0x6<<11)),
	NBT_OPCODE_WACK=(int)((0x7<<11)),
	NBT_OPCODE_REFRESH=(int)((0x8<<11)),
	NBT_OPCODE_REFRESH2=(int)((0x9<<11)),
	NBT_OPCODE_MULTI_HOME_REG=(int)((0xf<<11))
}
#else
 { __do_not_use_enum_nbt_opcode=0x7FFFFFFF}
#define NBT_OPCODE_QUERY ( (0x0<<11) )
#define NBT_OPCODE_REGISTER ( (0x5<<11) )
#define NBT_OPCODE_RELEASE ( (0x6<<11) )
#define NBT_OPCODE_WACK ( (0x7<<11) )
#define NBT_OPCODE_REFRESH ( (0x8<<11) )
#define NBT_OPCODE_REFRESH2 ( (0x9<<11) )
#define NBT_OPCODE_MULTI_HOME_REG ( (0xf<<11) )
#endif
;

enum nbt_rcode
#ifndef USE_UINT_ENUMS
 {
	NBT_RCODE_OK=(int)(0x0),
	NBT_RCODE_FMT=(int)(0x1),
	NBT_RCODE_SVR=(int)(0x2),
	NBT_RCODE_NAM=(int)(0x3),
	NBT_RCODE_IMP=(int)(0x4),
	NBT_RCODE_RFS=(int)(0x5),
	NBT_RCODE_ACT=(int)(0x6),
	NBT_RCODE_CFT=(int)(0x7)
}
#else
 { __do_not_use_enum_nbt_rcode=0x7FFFFFFF}
#define NBT_RCODE_OK ( 0x0 )
#define NBT_RCODE_FMT ( 0x1 )
#define NBT_RCODE_SVR ( 0x2 )
#define NBT_RCODE_NAM ( 0x3 )
#define NBT_RCODE_IMP ( 0x4 )
#define NBT_RCODE_RFS ( 0x5 )
#define NBT_RCODE_ACT ( 0x6 )
#define NBT_RCODE_CFT ( 0x7 )
#endif
;

enum nbt_name_type
#ifndef USE_UINT_ENUMS
 {
	NBT_NAME_CLIENT=(int)(0x00),
	NBT_NAME_MS=(int)(0x01),
	NBT_NAME_USER=(int)(0x03),
	NBT_NAME_SERVER=(int)(0x20),
	NBT_NAME_PDC=(int)(0x1B),
	NBT_NAME_LOGON=(int)(0x1C),
	NBT_NAME_MASTER=(int)(0x1D),
	NBT_NAME_BROWSER=(int)(0x1E)
}
#else
 { __do_not_use_enum_nbt_name_type=0x7FFFFFFF}
#define NBT_NAME_CLIENT ( 0x00 )
#define NBT_NAME_MS ( 0x01 )
#define NBT_NAME_USER ( 0x03 )
#define NBT_NAME_SERVER ( 0x20 )
#define NBT_NAME_PDC ( 0x1B )
#define NBT_NAME_LOGON ( 0x1C )
#define NBT_NAME_MASTER ( 0x1D )
#define NBT_NAME_BROWSER ( 0x1E )
#endif
;

struct nbt_name {
	const char * name;
	const char * scope;
	enum nbt_name_type type;
}/* [nopull,nopush,public] */;

enum nbt_qclass
#ifndef USE_UINT_ENUMS
 {
	NBT_QCLASS_IP=(int)(0x01)
}
#else
 { __do_not_use_enum_nbt_qclass=0x7FFFFFFF}
#define NBT_QCLASS_IP ( 0x01 )
#endif
;

enum nbt_qtype
#ifndef USE_UINT_ENUMS
 {
	NBT_QTYPE_ADDRESS=(int)(0x0001),
	NBT_QTYPE_NAMESERVICE=(int)(0x0002),
	NBT_QTYPE_NULL=(int)(0x000A),
	NBT_QTYPE_NETBIOS=(int)(0x0020),
	NBT_QTYPE_STATUS=(int)(0x0021)
}
#else
 { __do_not_use_enum_nbt_qtype=0x7FFFFFFF}
#define NBT_QTYPE_ADDRESS ( 0x0001 )
#define NBT_QTYPE_NAMESERVICE ( 0x0002 )
#define NBT_QTYPE_NULL ( 0x000A )
#define NBT_QTYPE_NETBIOS ( 0x0020 )
#define NBT_QTYPE_STATUS ( 0x0021 )
#endif
;

struct nbt_name_question {
	struct nbt_name name;
	enum nbt_qtype question_type;
	enum nbt_qclass question_class;
};

enum nbt_node_type
#ifndef USE_UINT_ENUMS
 {
	NBT_NODE_B=(int)(0x0000),
	NBT_NODE_P=(int)(0x2000),
	NBT_NODE_M=(int)(0x4000),
	NBT_NODE_H=(int)(0x6000)
}
#else
 { __do_not_use_enum_nbt_node_type=0x7FFFFFFF}
#define NBT_NODE_B ( 0x0000 )
#define NBT_NODE_P ( 0x2000 )
#define NBT_NODE_M ( 0x4000 )
#define NBT_NODE_H ( 0x6000 )
#endif
;

/* bitmap nb_flags */
#define NBT_NM_PERMANENT ( 0x0200 )
#define NBT_NM_ACTIVE ( 0x0400 )
#define NBT_NM_CONFLICT ( 0x0800 )
#define NBT_NM_DEREGISTER ( 0x1000 )
#define NBT_NM_OWNER_TYPE ( 0x6000 )
#define NBT_NM_GROUP ( 0x8000 )

struct nbt_rdata_address {
	uint16_t nb_flags;
	const char * ipaddr;
};

struct nbt_rdata_netbios {
	uint16_t length;
	struct nbt_rdata_address *addresses;
};

struct nbt_statistics {
	uint8_t unit_id[6];
	uint8_t jumpers;
	uint8_t test_result;
	uint16_t version_number;
	uint16_t period_of_statistics;
	uint16_t number_of_crcs;
	uint16_t number_alignment_errors;
	uint16_t number_of_collisions;
	uint16_t number_send_aborts;
	uint32_t number_good_sends;
	uint32_t number_good_receives;
	uint16_t number_retransmits;
	uint16_t number_no_resource_conditions;
	uint16_t number_free_command_blocks;
	uint16_t total_number_command_blocks;
	uint16_t max_total_number_command_blocks;
	uint16_t number_pending_sessions;
	uint16_t max_number_pending_sessions;
	uint16_t max_total_sessions_possible;
	uint16_t session_data_packet_size;
};

struct nbt_status_name {
	const char *name;/* [charset(DOS)] */
	enum nbt_name_type type;
	uint16_t nb_flags;
};

struct nbt_rdata_status {
	uint16_t length;/* [value(num_names*18+47)] */
	uint8_t num_names;
	struct nbt_status_name *names;
	struct nbt_statistics statistics;
};

struct nbt_rdata_data {
	uint16_t length;
	uint8_t *data;
};

union nbt_rdata {
	struct nbt_rdata_netbios netbios;/* [case(NBT_QTYPE_NETBIOS)] */
	struct nbt_rdata_status status;/* [case(NBT_QTYPE_STATUS)] */
	struct nbt_rdata_data data;/* [default] */
}/* [nodiscriminant,public] */;

struct nbt_res_rec {
	struct nbt_name name;
	enum nbt_qtype rr_type;
	enum nbt_qclass rr_class;
	uint32_t ttl;
	union nbt_rdata rdata;/* [switch_is(rr_type)] */
}/* [flag(LIBNDR_PRINT_ARRAY_HEX),nopush] */;

struct nbt_name_packet {
	uint16_t name_trn_id;
	uint16_t operation;
	uint16_t qdcount;
	uint16_t ancount;
	uint16_t nscount;
	uint16_t arcount;
	struct nbt_name_question *questions;
	struct nbt_res_rec *answers;
	struct nbt_res_rec *nsrecs;
	struct nbt_res_rec *additional;
	DATA_BLOB padding;/* [flag(LIBNDR_FLAG_REMAINING)] */
}/* [flag(LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_BIGENDIAN|LIBNDR_PRINT_ARRAY_HEX),public] */;

enum dgram_msg_type
#ifndef USE_UINT_ENUMS
 {
	DGRAM_DIRECT_UNIQUE=(int)(0x10),
	DGRAM_DIRECT_GROUP=(int)(0x11),
	DGRAM_BCAST=(int)(0x12),
	DGRAM_ERROR=(int)(0x13),
	DGRAM_QUERY=(int)(0x14),
	DGRAM_QUERY_POSITIVE=(int)(0x15),
	DGRAM_QUERY_NEGATIVE=(int)(0x16)
}
#else
 { __do_not_use_enum_dgram_msg_type=0x7FFFFFFF}
#define DGRAM_DIRECT_UNIQUE ( 0x10 )
#define DGRAM_DIRECT_GROUP ( 0x11 )
#define DGRAM_BCAST ( 0x12 )
#define DGRAM_ERROR ( 0x13 )
#define DGRAM_QUERY ( 0x14 )
#define DGRAM_QUERY_POSITIVE ( 0x15 )
#define DGRAM_QUERY_NEGATIVE ( 0x16 )
#endif
;

/* bitmap dgram_flags */
#define DGRAM_FLAG_MORE ( 0x01 )
#define DGRAM_FLAG_FIRST ( 0x02 )
#define DGRAM_FLAG_NODE_TYPE ( 0x0C )

enum dgram_node_type
#ifndef USE_UINT_ENUMS
 {
	DGRAM_NODE_B=(int)(0x00),
	DGRAM_NODE_P=(int)(0x04),
	DGRAM_NODE_M=(int)(0x08),
	DGRAM_NODE_NBDD=(int)(0x0C)
}
#else
 { __do_not_use_enum_dgram_node_type=0x7FFFFFFF}
#define DGRAM_NODE_B ( 0x00 )
#define DGRAM_NODE_P ( 0x04 )
#define DGRAM_NODE_M ( 0x08 )
#define DGRAM_NODE_NBDD ( 0x0C )
#endif
;

enum smb_command
#ifndef USE_UINT_ENUMS
 {
	SMB_TRANSACTION=(int)(0x25)
}
#else
 { __do_not_use_enum_smb_command=0x7FFFFFFF}
#define SMB_TRANSACTION ( 0x25 )
#endif
;

struct smb_trans_body {
	uint8_t wct;/* [range(17,17),value(17)] */
	uint16_t total_param_count;
	uint16_t total_data_count;
	uint16_t max_param_count;
	uint16_t max_data_count;
	uint8_t max_setup_count;
	uint8_t pad;
	uint16_t trans_flags;
	uint32_t timeout;
	uint16_t reserved;
	uint16_t param_count;
	uint16_t param_offset;
	uint16_t data_count;
	uint16_t data_offset;
	uint8_t setup_count;/* [range(3,3),value(3)] */
	uint8_t pad2;
	uint16_t opcode;
	uint16_t priority;
	uint16_t _class;
	uint16_t byte_count;/* [value(strlen(mailslot_name)+1+data.length)] */
	const char * mailslot_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	DATA_BLOB data;/* [flag(LIBNDR_FLAG_REMAINING)] */
};

union smb_body {
	struct smb_trans_body trans;/* [case(SMB_TRANSACTION)] */
}/* [nodiscriminant] */;

struct dgram_smb_packet {
	enum smb_command smb_command;
	uint8_t err_class;
	uint8_t pad;
	uint16_t err_code;
	uint8_t flags;
	uint16_t flags2;
	uint16_t pid_high;
	uint8_t signature[8];
	uint16_t reserved;
	uint16_t tid;
	uint16_t pid;
	uint16_t vuid;
	uint16_t mid;
	union smb_body body;/* [switch_is(smb_command)] */
}/* [flag(LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_LITTLE_ENDIAN|LIBNDR_PRINT_ARRAY_HEX),public] */;

union dgram_message_body {
	struct dgram_smb_packet smb;/* [case(DGRAM_SMB)] */
}/* [nodiscriminant] */;

struct dgram_message {
	uint16_t length;
	uint16_t offset;
	struct nbt_name source_name;
	struct nbt_name dest_name;
	uint32_t dgram_body_type;
	union dgram_message_body body;/* [switch_is(dgram_body_type)] */
};

enum dgram_err_code
#ifndef USE_UINT_ENUMS
 {
	DGRAM_ERROR_NAME_NOT_PRESENT=(int)(0x82),
	DGRAM_ERROR_INVALID_SOURCE=(int)(0x83),
	DGRAM_ERROR_INVALID_DEST=(int)(0x84)
}
#else
 { __do_not_use_enum_dgram_err_code=0x7FFFFFFF}
#define DGRAM_ERROR_NAME_NOT_PRESENT ( 0x82 )
#define DGRAM_ERROR_INVALID_SOURCE ( 0x83 )
#define DGRAM_ERROR_INVALID_DEST ( 0x84 )
#endif
;

union dgram_data {
	struct dgram_message msg;/* [case(DGRAM_DIRECT_UNIQUE)] */
	enum dgram_err_code error;/* [case(DGRAM_ERROR)] */
	struct nbt_name dest_name;/* [case(DGRAM_QUERY)] */
}/* [nodiscriminant] */;

struct nbt_dgram_packet {
	enum dgram_msg_type msg_type;
	uint8_t flags;
	uint16_t dgram_id;
	const char * src_addr;
	uint16_t src_port;
	union dgram_data data;/* [switch_is(msg_type)] */
}/* [flag(LIBNDR_FLAG_NOALIGN|LIBNDR_FLAG_BIGENDIAN|LIBNDR_PRINT_ARRAY_HEX),public] */;

struct nbt_sockaddr {
	uint32_t sockaddr_family;
	const char * pdc_ip;/* [flag(LIBNDR_FLAG_BIGENDIAN)] */
	DATA_BLOB remaining;/* [flag(LIBNDR_FLAG_REMAINING)] */
}/* [gensize,public] */;

/* bitmap nbt_server_type */
#define NBT_SERVER_PDC ( 0x00000001 )
#define NBT_SERVER_GC ( 0x00000004 )
#define NBT_SERVER_LDAP ( 0x00000008 )
#define NBT_SERVER_DS ( 0x00000010 )
#define NBT_SERVER_KDC ( 0x00000020 )
#define NBT_SERVER_TIMESERV ( 0x00000040 )
#define NBT_SERVER_CLOSEST ( 0x00000080 )
#define NBT_SERVER_WRITABLE ( 0x00000100 )
#define NBT_SERVER_GOOD_TIMESERV ( 0x00000200 )
#define NBT_SERVER_NDNC ( 0x00000400 )
#define NBT_SERVER_SELECT_SECRET_DOMAIN_6 ( 0x00000800 )
#define NBT_SERVER_FULL_SECRET_DOMAIN_6 ( 0x00001000 )
#define NBT_SERVER_ADS_WEB_SERVICE ( 0x00002000 )
#define NBT_SERVER_DS_8 ( 0x00004000 )
#define NBT_SERVER_HAS_DNS_NAME ( 0x20000000 )
#define NBT_SERVER_IS_DEFAULT_NC ( 0x40000000 )
#define NBT_SERVER_FOREST_ROOT ( 0x80000000 )

/* bitmap netlogon_nt_version_flags */
#define NETLOGON_NT_VERSION_1 ( 0x00000001 )
#define NETLOGON_NT_VERSION_5 ( 0x00000002 )
#define NETLOGON_NT_VERSION_5EX ( 0x00000004 )
#define NETLOGON_NT_VERSION_5EX_WITH_IP ( 0x00000008 )
#define NETLOGON_NT_VERSION_WITH_CLOSEST_SITE ( 0x00000010 )
#define NETLOGON_NT_VERSION_AVOID_NT4EMUL ( 0x01000000 )
#define NETLOGON_NT_VERSION_PDC ( 0x10000000 )
#define NETLOGON_NT_VERSION_IP ( 0x20000000 )
#define NETLOGON_NT_VERSION_LOCAL ( 0x40000000 )
#define NETLOGON_NT_VERSION_GC ( 0x80000000 )

enum netlogon_command
#ifndef USE_UINT_ENUMS
 {
	LOGON_REQUEST=(int)(0),
	LOGON_RESPONSE2=(int)(6),
	LOGON_PRIMARY_QUERY=(int)(7),
	NETLOGON_ANNOUNCE_UAS=(int)(10),
	NETLOGON_RESPONSE_FROM_PDC=(int)(12),
	LOGON_SAM_LOGON_REQUEST=(int)(18),
	LOGON_SAM_LOGON_RESPONSE=(int)(19),
	LOGON_SAM_LOGON_PAUSE_RESPONSE=(int)(20),
	LOGON_SAM_LOGON_USER_UNKNOWN=(int)(21),
	LOGON_SAM_LOGON_RESPONSE_EX=(int)(23),
	LOGON_SAM_LOGON_PAUSE_RESPONSE_EX=(int)(24),
	LOGON_SAM_LOGON_USER_UNKNOWN_EX=(int)(25)
}
#else
 { __do_not_use_enum_netlogon_command=0x7FFFFFFF}
#define LOGON_REQUEST ( 0 )
#define LOGON_RESPONSE2 ( 6 )
#define LOGON_PRIMARY_QUERY ( 7 )
#define NETLOGON_ANNOUNCE_UAS ( 10 )
#define NETLOGON_RESPONSE_FROM_PDC ( 12 )
#define LOGON_SAM_LOGON_REQUEST ( 18 )
#define LOGON_SAM_LOGON_RESPONSE ( 19 )
#define LOGON_SAM_LOGON_PAUSE_RESPONSE ( 20 )
#define LOGON_SAM_LOGON_USER_UNKNOWN ( 21 )
#define LOGON_SAM_LOGON_RESPONSE_EX ( 23 )
#define LOGON_SAM_LOGON_PAUSE_RESPONSE_EX ( 24 )
#define LOGON_SAM_LOGON_USER_UNKNOWN_EX ( 25 )
#endif
;

struct NETLOGON_SAM_LOGON_REQUEST {
	uint16_t request_count;
	const char * computer_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char * user_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char * mailslot_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	uint32_t acct_control;
	uint32_t sid_size;/* [value(ndr_size_dom_sid0(&sid,ndr->flags))] */
	DATA_BLOB _pad;/* [flag(LIBNDR_FLAG_ALIGN4)] */
	struct dom_sid0 sid;/* [subcontext(0),subcontext_size(sid_size)] */
	uint32_t nt_version;
	uint16_t lmnt_token;
	uint16_t lm20_token;
}/* [nopull,nopush] */;

struct NETLOGON_LOGON_REQUEST {
	const char * computer_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * user_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * mailslot_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	uint8_t request_count;
	uint16_t lmnt_token;
	uint16_t lm20_token;
};

struct NETLOGON_SAM_LOGON_RESPONSE_NT40 {
	enum netlogon_command command;
	const char * pdc_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char * user_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char * domain_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	uint32_t nt_version;
	uint16_t lmnt_token;
	uint16_t lm20_token;
}/* [flag(LIBNDR_FLAG_NOALIGN),public] */;

struct NETLOGON_SAM_LOGON_RESPONSE {
	enum netlogon_command command;
	const char * pdc_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char * user_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char * domain_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	struct GUID domain_uuid;
	struct GUID zero_uuid;
	const char * forest;
	const char * dns_domain;
	const char * pdc_dns_name;
	const char * pdc_ip;
	uint32_t server_type;
	uint32_t nt_version;
	uint16_t lmnt_token;
	uint16_t lm20_token;
}/* [flag(LIBNDR_FLAG_NOALIGN),public] */;

struct NETLOGON_SAM_LOGON_RESPONSE_EX {
	enum netlogon_command command;
	uint16_t sbz;
	uint32_t server_type;
	struct GUID domain_uuid;
	const char * forest;
	const char * dns_domain;
	const char * pdc_dns_name;
	const char * domain_name;
	const char * pdc_name;
	const char * user_name;
	const char * server_site;
	const char * client_site;
	uint8_t sockaddr_size;/* [value(ndr_size_nbt_sockaddr(&sockaddr,ndr->flags))] */
	struct nbt_sockaddr sockaddr;/* [subcontext(0),subcontext_size(sockaddr_size)] */
	const char * next_closest_site;
	uint32_t nt_version;
	uint16_t lmnt_token;
	uint16_t lm20_token;
}/* [flag(LIBNDR_FLAG_NOALIGN),public] */;

struct nbt_netlogon_query_for_pdc {
	const char * computer_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * mailslot_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	DATA_BLOB _pad;/* [flag(LIBNDR_FLAG_ALIGN2)] */
	const char * unicode_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	uint32_t nt_version;
	uint16_t lmnt_token;
	uint16_t lm20_token;
};

struct nbt_netlogon_response_from_pdc {
	enum netlogon_command command;
	const char * pdc_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	DATA_BLOB _pad;/* [flag(LIBNDR_FLAG_ALIGN2)] */
	const char * unicode_pdc_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char * domain_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	uint32_t nt_version;
	uint16_t lmnt_token;
	uint16_t lm20_token;
}/* [public] */;

struct nbt_netlogon_response2 {
	enum netlogon_command command;
	const char * pdc_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	uint16_t lm20_token;
}/* [flag(LIBNDR_FLAG_NOALIGN),public] */;

struct nbt_db_change_info {
	enum netr_SamDatabaseID db_index;
	uint64_t serial;
	NTTIME timestamp;
};

struct NETLOGON_DB_CHANGE {
	uint32_t serial_lo;
	time_t timestamp;
	uint32_t pulse;
	uint32_t random;
	const char * pdc_name;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	const char * domain;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
	DATA_BLOB _pad;/* [flag(LIBNDR_FLAG_ALIGN2)] */
	const char * unicode_pdc_name;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	const char * unicode_domain;/* [flag(LIBNDR_FLAG_STR_NULLTERM|LIBNDR_FLAG_ALIGN2)] */
	uint32_t db_count;
	struct nbt_db_change_info *dbchange;
	uint32_t sid_size;/* [value(ndr_size_dom_sid0(&sid,ndr->flags))] */
	struct dom_sid0 sid;/* [subcontext(0),subcontext_size(sid_size)] */
	uint32_t message_format_version;
	uint32_t message_token;
};

union nbt_netlogon_request {
	struct NETLOGON_LOGON_REQUEST logon0;/* [case(LOGON_REQUEST)] */
	struct NETLOGON_SAM_LOGON_REQUEST logon;/* [case(LOGON_SAM_LOGON_REQUEST)] */
	struct nbt_netlogon_query_for_pdc pdc;/* [case(LOGON_PRIMARY_QUERY)] */
	struct NETLOGON_DB_CHANGE uas;/* [case(NETLOGON_ANNOUNCE_UAS)] */
}/* [nodiscriminant] */;

struct nbt_netlogon_packet {
	enum netlogon_command command;
	union nbt_netlogon_request req;/* [switch_is(command)] */
}/* [flag(LIBNDR_FLAG_NOALIGN),public] */;

enum nbt_browse_opcode
#ifndef USE_UINT_ENUMS
 {
	HostAnnouncement=(int)(1),
	AnnouncementRequest=(int)(2),
	Election=(int)(8),
	GetBackupListReq=(int)(9),
	GetBackupListResp=(int)(10),
	BecomeBackup=(int)(11),
	DomainAnnouncement=(int)(12),
	MasterAnnouncement=(int)(13),
	ResetBrowserState=(int)(14),
	LocalMasterAnnouncement=(int)(15)
}
#else
 { __do_not_use_enum_nbt_browse_opcode=0x7FFFFFFF}
#define HostAnnouncement ( 1 )
#define AnnouncementRequest ( 2 )
#define Election ( 8 )
#define GetBackupListReq ( 9 )
#define GetBackupListResp ( 10 )
#define BecomeBackup ( 11 )
#define DomainAnnouncement ( 12 )
#define MasterAnnouncement ( 13 )
#define ResetBrowserState ( 14 )
#define LocalMasterAnnouncement ( 15 )
#endif
;

struct nbt_browse_host_announcement {
	uint8_t UpdateCount;
	uint32_t Periodicity;
	const char *ServerName;/* [charset(DOS)] */
	uint8_t OSMajor;
	uint8_t OSMinor;
	uint32_t ServerType;
	uint8_t BroMajorVer;
	uint8_t BroMinorVer;
	uint16_t Signature;
	const char * Comment;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
};

struct nbt_browse_announcement_request {
	uint8_t Unused;
	const char * ResponseName;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
};

struct nbt_browse_election_request {
	uint8_t Version;
	uint32_t Criteria;
	uint32_t UpTime;
	uint32_t Reserved;
	const char * ServerName;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
};

struct nbt_browse_backup_list_request {
	uint8_t ReqCount;
	uint32_t Token;
};

struct nbt_browse_backup_list_response {
	uint8_t BackupCount;
	uint32_t Token;
	struct nbt_name *BackupServerList;
};

struct nbt_browse_become_backup {
	const char * BrowserName;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
};

struct nbt_browse_domain_announcement {
	uint8_t UpdateCount;
	uint32_t Periodicity;
	const char *ServerName;/* [charset(DOS)] */
	uint8_t OSMajor;
	uint8_t OSMinor;
	uint32_t ServerType;
	uint32_t MysteriousField;
	const char * Comment;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
};

struct nbt_browse_master_announcement {
	const char * ServerName;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
};

struct nbt_browse_reset_state {
	uint8_t Command;
};

struct nbt_browse_local_master_announcement {
	uint8_t UpdateCount;
	uint32_t Periodicity;
	const char *ServerName;/* [charset(DOS)] */
	uint8_t OSMajor;
	uint8_t OSMinor;
	uint32_t ServerType;
	uint8_t BroMajorVer;
	uint8_t BroMinorVer;
	uint16_t Signature;
	const char * Comment;/* [flag(LIBNDR_FLAG_STR_ASCII|LIBNDR_FLAG_STR_NULLTERM)] */
};

union nbt_browse_payload {
	struct nbt_browse_host_announcement host_annoucement;/* [case(HostAnnouncement)] */
	struct nbt_browse_announcement_request announcement_request;/* [case(AnnouncementRequest)] */
	struct nbt_browse_election_request election_request;/* [case(Election)] */
	struct nbt_browse_backup_list_request backup_list_request;/* [case(GetBackupListReq)] */
	struct nbt_browse_backup_list_response backup_list_response;/* [case(GetBackupListResp)] */
	struct nbt_browse_become_backup become_backup;/* [case(BecomeBackup)] */
	struct nbt_browse_domain_announcement domain_announcement;/* [case(DomainAnnouncement)] */
	struct nbt_browse_master_announcement master_announcement;/* [case(MasterAnnouncement)] */
	struct nbt_browse_reset_state reset_browser_state;/* [case(ResetBrowserState)] */
	struct nbt_browse_local_master_announcement local_master_announcement;/* [case(LocalMasterAnnouncement)] */
}/* [nodiscriminant] */;

struct nbt_browse_packet {
	enum nbt_browse_opcode opcode;
	union nbt_browse_payload payload;/* [switch_is(opcode)] */
}/* [flag(LIBNDR_FLAG_NOALIGN),public] */;


struct decode_nbt_netlogon_packet {
	struct {
		struct nbt_netlogon_packet packet;
	} in;

};

#endif /* _HEADER_nbt */
#endif /* _PIDL_HEADER_nbt */
