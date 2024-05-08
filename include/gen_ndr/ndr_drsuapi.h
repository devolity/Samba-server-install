/* header auto-generated by pidl */

#include <ndr.h>
#include <gen_ndr/drsuapi.h>

#ifndef _HEADER_NDR_drsuapi
#define _HEADER_NDR_drsuapi

#include <ndr/ndr_drsuapi.h>
#define NDR_DRSUAPI_UUID "e3514235-4b06-11d1-ab04-00c04fc2dcd2"
#define NDR_DRSUAPI_VERSION 4.0
#define NDR_DRSUAPI_NAME "drsuapi"
#define NDR_DRSUAPI_HELPSTRING "Active Directory Replication"
extern const struct ndr_interface_table ndr_table_drsuapi;
#define NDR_DRSUAPI_DSBIND (0x00)

#define NDR_DRSUAPI_DSUNBIND (0x01)

#define NDR_DRSUAPI_DSREPLICASYNC (0x02)

#define NDR_DRSUAPI_DSGETNCCHANGES (0x03)

#define NDR_DRSUAPI_DSREPLICAUPDATEREFS (0x04)

#define NDR_DRSUAPI_DSREPLICAADD (0x05)

#define NDR_DRSUAPI_DSREPLICADEL (0x06)

#define NDR_DRSUAPI_DSREPLICAMOD (0x07)

#define NDR_DRSUAPI_VERIFY_NAMES (0x08)

#define NDR_DRSUAPI_DSGETMEMBERSHIPS (0x09)

#define NDR_DRSUAPI_INTER_DOMAIN_MOVE (0x0a)

#define NDR_DRSUAPI_DSGETNT4CHANGELOG (0x0b)

#define NDR_DRSUAPI_DSCRACKNAMES (0x0c)

#define NDR_DRSUAPI_DSWRITEACCOUNTSPN (0x0d)

#define NDR_DRSUAPI_DSREMOVEDSSERVER (0x0e)

#define NDR_DRSUAPI_REMOVE_DS_DOMAIN (0x0f)

#define NDR_DRSUAPI_DSGETDOMAINCONTROLLERINFO (0x10)

#define NDR_DRSUAPI_DSADDENTRY (0x11)

#define NDR_DRSUAPI_DSEXECUTEKCC (0x12)

#define NDR_DRSUAPI_DSREPLICAGETINFO (0x13)

#define NDR_DRSUAPI_ADD_SID_HISTORY (0x14)

#define NDR_DRSUAPI_DSGETMEMBERSHIPS2 (0x15)

#define NDR_DRSUAPI_REPLICA_VERIFY_OBJECTS (0x16)

#define NDR_DRSUAPI_GET_OBJECT_EXISTENCE (0x17)

#define NDR_DRSUAPI_QUERYSITESBYCOST (0x18)

#define NDR_DRSUAPI_CALL_COUNT (25)
enum ndr_err_code ndr_push_drsuapi_DrsOptions(struct ndr_push *ndr, int ndr_flags, uint32_t r);
enum ndr_err_code ndr_pull_drsuapi_DrsOptions(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_drsuapi_DrsOptions(struct ndr_print *ndr, const char *name, uint32_t r);
enum ndr_err_code ndr_push_drsuapi_DrsUpdate(struct ndr_push *ndr, int ndr_flags, uint32_t r);
enum ndr_err_code ndr_pull_drsuapi_DrsUpdate(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_drsuapi_DrsUpdate(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_drsuapi_SupportedExtensions(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_drsuapi_SupportedExtensionsExt(struct ndr_print *ndr, const char *name, uint32_t r);
enum ndr_err_code ndr_push_drsuapi_DsBindInfo24(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsBindInfo24 *r);
enum ndr_err_code ndr_pull_drsuapi_DsBindInfo24(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsBindInfo24 *r);
void ndr_print_drsuapi_DsBindInfo24(struct ndr_print *ndr, const char *name, const struct drsuapi_DsBindInfo24 *r);
enum ndr_err_code ndr_push_drsuapi_DsBindInfo28(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsBindInfo28 *r);
enum ndr_err_code ndr_pull_drsuapi_DsBindInfo28(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsBindInfo28 *r);
void ndr_print_drsuapi_DsBindInfo28(struct ndr_print *ndr, const char *name, const struct drsuapi_DsBindInfo28 *r);
enum ndr_err_code ndr_push_drsuapi_DsBindInfo32(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsBindInfo32 *r);
enum ndr_err_code ndr_pull_drsuapi_DsBindInfo32(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsBindInfo32 *r);
void ndr_print_drsuapi_DsBindInfo32(struct ndr_print *ndr, const char *name, const struct drsuapi_DsBindInfo32 *r);
enum ndr_err_code ndr_push_drsuapi_DsBindInfo48(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsBindInfo48 *r);
enum ndr_err_code ndr_pull_drsuapi_DsBindInfo48(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsBindInfo48 *r);
void ndr_print_drsuapi_DsBindInfo48(struct ndr_print *ndr, const char *name, const struct drsuapi_DsBindInfo48 *r);
enum ndr_err_code ndr_push_drsuapi_DsBindInfo52(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsBindInfo52 *r);
enum ndr_err_code ndr_pull_drsuapi_DsBindInfo52(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsBindInfo52 *r);
void ndr_print_drsuapi_DsBindInfo52(struct ndr_print *ndr, const char *name, const struct drsuapi_DsBindInfo52 *r);
enum ndr_err_code ndr_push_drsuapi_DsBindInfoFallBack(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsBindInfoFallBack *r);
enum ndr_err_code ndr_pull_drsuapi_DsBindInfoFallBack(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsBindInfoFallBack *r);
void ndr_print_drsuapi_DsBindInfoFallBack(struct ndr_print *ndr, const char *name, const struct drsuapi_DsBindInfoFallBack *r);
enum ndr_err_code ndr_push_drsuapi_DsBindInfo(struct ndr_push *ndr, int ndr_flags, const union drsuapi_DsBindInfo *r);
enum ndr_err_code ndr_pull_drsuapi_DsBindInfo(struct ndr_pull *ndr, int ndr_flags, union drsuapi_DsBindInfo *r);
void ndr_print_drsuapi_DsBindInfo(struct ndr_print *ndr, const char *name, const union drsuapi_DsBindInfo *r);
void ndr_print_drsuapi_DsBindInfoCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsBindInfoCtr *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaObjectIdentifier(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaObjectIdentifier *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaObjectIdentifier(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaObjectIdentifier *r);
void ndr_print_drsuapi_DsReplicaObjectIdentifier(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjectIdentifier *r);
size_t ndr_size_drsuapi_DsReplicaObjectIdentifier(const struct drsuapi_DsReplicaObjectIdentifier *r, int flags);
void ndr_print_drsuapi_DsReplicaSyncRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaSyncRequest1 *r);
void ndr_print_drsuapi_DsReplicaSyncRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsReplicaSyncRequest *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaHighWaterMark(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaHighWaterMark *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaHighWaterMark(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaHighWaterMark *r);
void ndr_print_drsuapi_DsReplicaHighWaterMark(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaHighWaterMark *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaCursor(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaCursor *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaCursor(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaCursor *r);
void ndr_print_drsuapi_DsReplicaCursor(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaCursor *r);
void ndr_print_drsuapi_DsReplicaCursorCtrEx(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaCursorCtrEx *r);
void ndr_print_drsuapi_DsExtendedOperation(struct ndr_print *ndr, const char *name, enum drsuapi_DsExtendedOperation r);
void ndr_print_drsuapi_DsExtendedError(struct ndr_print *ndr, const char *name, enum drsuapi_DsExtendedError r);
void ndr_print_drsuapi_DsGetNCChangesRequest5(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesRequest5 *r);
void ndr_print_drsuapi_DsReplicaOID(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaOID *r);
void ndr_print_drsuapi_DsReplicaOIDMapping(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaOIDMapping *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaOIDMapping_Ctr(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaOIDMapping_Ctr *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaOIDMapping_Ctr(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaOIDMapping_Ctr *r);
void ndr_print_drsuapi_DsReplicaOIDMapping_Ctr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaOIDMapping_Ctr *r);
enum ndr_err_code ndr_push_drsuapi_DsAttributeId(struct ndr_push *ndr, int ndr_flags, enum drsuapi_DsAttributeId r);
enum ndr_err_code ndr_pull_drsuapi_DsAttributeId(struct ndr_pull *ndr, int ndr_flags, enum drsuapi_DsAttributeId *r);
void ndr_print_drsuapi_DsAttributeId(struct ndr_print *ndr, const char *name, enum drsuapi_DsAttributeId r);
void ndr_print_drsuapi_DsPartialAttributeSet(struct ndr_print *ndr, const char *name, const struct drsuapi_DsPartialAttributeSet *r);
void ndr_print_drsuapi_DsGetNCChangesRequest8(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesRequest8 *r);
void ndr_print_drsuapi_DsGetNCChangesRequest10(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesRequest10 *r);
void ndr_print_drsuapi_DsGetNCChangesRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetNCChangesRequest *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaCursor2(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaCursor2 *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaCursor2(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaCursor2 *r);
void ndr_print_drsuapi_DsReplicaCursor2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaCursor2 *r);
void ndr_print_drsuapi_DsReplicaCursor2CtrEx(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaCursor2CtrEx *r);
void ndr_print_drsuapi_DsAttributeValue(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAttributeValue *r);
void ndr_print_drsuapi_DsAttributeValueCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAttributeValueCtr *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaObjectIdentifier3(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaObjectIdentifier3 *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaObjectIdentifier3(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaObjectIdentifier3 *r);
void ndr_print_drsuapi_DsReplicaObjectIdentifier3(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjectIdentifier3 *r);
size_t ndr_size_drsuapi_DsReplicaObjectIdentifier3(const struct drsuapi_DsReplicaObjectIdentifier3 *r, int flags);
enum ndr_err_code ndr_push_drsuapi_DsReplicaObjectIdentifier3Binary(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaObjectIdentifier3Binary *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaObjectIdentifier3Binary(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaObjectIdentifier3Binary *r);
void ndr_print_drsuapi_DsReplicaObjectIdentifier3Binary(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjectIdentifier3Binary *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaAttribute(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaAttribute *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaAttribute(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaAttribute *r);
void ndr_print_drsuapi_DsReplicaAttribute(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaAttribute *r);
void ndr_print_drsuapi_DsReplicaAttributeCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaAttributeCtr *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaObjectFlags(struct ndr_push *ndr, int ndr_flags, uint32_t r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaObjectFlags(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_drsuapi_DsReplicaObjectFlags(struct ndr_print *ndr, const char *name, uint32_t r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaObject(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaObject *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaObject(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaObject *r);
void ndr_print_drsuapi_DsReplicaObject(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObject *r);
void ndr_print_drsuapi_DsReplicaMetaData(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaMetaData *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaMetaDataCtr(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaMetaDataCtr *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaMetaDataCtr(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaMetaDataCtr *r);
void ndr_print_drsuapi_DsReplicaMetaDataCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaMetaDataCtr *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaObjectListItemEx(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaObjectListItemEx *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaObjectListItemEx(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaObjectListItemEx *r);
void ndr_print_drsuapi_DsReplicaObjectListItemEx(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjectListItemEx *r);
enum ndr_err_code ndr_push_drsuapi_DsGetNCChangesCtr1(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsGetNCChangesCtr1 *r);
enum ndr_err_code ndr_pull_drsuapi_DsGetNCChangesCtr1(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsGetNCChangesCtr1 *r);
void ndr_print_drsuapi_DsGetNCChangesCtr1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesCtr1 *r);
size_t ndr_size_drsuapi_DsGetNCChangesCtr1(const struct drsuapi_DsGetNCChangesCtr1 *r, int flags);
enum ndr_err_code ndr_push_drsuapi_DsLinkedAttributeFlags(struct ndr_push *ndr, int ndr_flags, uint32_t r);
enum ndr_err_code ndr_pull_drsuapi_DsLinkedAttributeFlags(struct ndr_pull *ndr, int ndr_flags, uint32_t *r);
void ndr_print_drsuapi_DsLinkedAttributeFlags(struct ndr_print *ndr, const char *name, uint32_t r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaLinkedAttribute(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaLinkedAttribute *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaLinkedAttribute(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaLinkedAttribute *r);
void ndr_print_drsuapi_DsReplicaLinkedAttribute(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaLinkedAttribute *r);
enum ndr_err_code ndr_push_drsuapi_DsGetNCChangesCtr6(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsGetNCChangesCtr6 *r);
enum ndr_err_code ndr_pull_drsuapi_DsGetNCChangesCtr6(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsGetNCChangesCtr6 *r);
void ndr_print_drsuapi_DsGetNCChangesCtr6(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesCtr6 *r);
size_t ndr_size_drsuapi_DsGetNCChangesCtr6(const struct drsuapi_DsGetNCChangesCtr6 *r, int flags);
enum ndr_err_code ndr_push_drsuapi_DsGetNCChangesCtr1TS(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsGetNCChangesCtr1TS *r);
enum ndr_err_code ndr_pull_drsuapi_DsGetNCChangesCtr1TS(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsGetNCChangesCtr1TS *r);
void ndr_print_drsuapi_DsGetNCChangesCtr1TS(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesCtr1TS *r);
enum ndr_err_code ndr_push_drsuapi_DsGetNCChangesCtr6TS(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsGetNCChangesCtr6TS *r);
enum ndr_err_code ndr_pull_drsuapi_DsGetNCChangesCtr6TS(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsGetNCChangesCtr6TS *r);
void ndr_print_drsuapi_DsGetNCChangesCtr6TS(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesCtr6TS *r);
enum ndr_err_code ndr_push_drsuapi_DsGetNCChangesMSZIPCtr1(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsGetNCChangesMSZIPCtr1 *r);
void ndr_print_drsuapi_DsGetNCChangesMSZIPCtr1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesMSZIPCtr1 *r);
enum ndr_err_code ndr_push_drsuapi_DsGetNCChangesMSZIPCtr6(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsGetNCChangesMSZIPCtr6 *r);
void ndr_print_drsuapi_DsGetNCChangesMSZIPCtr6(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesMSZIPCtr6 *r);
enum ndr_err_code ndr_push_drsuapi_DsGetNCChangesXPRESSCtr1(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsGetNCChangesXPRESSCtr1 *r);
void ndr_print_drsuapi_DsGetNCChangesXPRESSCtr1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesXPRESSCtr1 *r);
enum ndr_err_code ndr_push_drsuapi_DsGetNCChangesXPRESSCtr6(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsGetNCChangesXPRESSCtr6 *r);
void ndr_print_drsuapi_DsGetNCChangesXPRESSCtr6(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesXPRESSCtr6 *r);
void ndr_print_drsuapi_DsGetNCChangesCompressionType(struct ndr_print *ndr, const char *name, enum drsuapi_DsGetNCChangesCompressionType r);
void ndr_print_drsuapi_DsGetNCChangesCompressedCtr(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetNCChangesCompressedCtr *r);
void ndr_print_drsuapi_DsGetNCChangesCtr2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesCtr2 *r);
void ndr_print_drsuapi_DsGetNCChangesCtr7(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNCChangesCtr7 *r);
void ndr_print_drsuapi_DsGetNCChangesCtr(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetNCChangesCtr *r);
void ndr_print_drsuapi_DsReplicaUpdateRefsRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaUpdateRefsRequest1 *r);
void ndr_print_drsuapi_DsReplicaUpdateRefsRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsReplicaUpdateRefsRequest *r);
void ndr_print_drsuapi_DsReplicaAddRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaAddRequest1 *r);
void ndr_print_drsuapi_DsReplicaAddRequest2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaAddRequest2 *r);
void ndr_print_drsuapi_DsReplicaAddRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsReplicaAddRequest *r);
void ndr_print_drsuapi_DsReplicaDelRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaDelRequest1 *r);
void ndr_print_drsuapi_DsReplicaDelRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsReplicaDelRequest *r);
void ndr_print_drsuapi_DsReplicaModRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaModRequest1 *r);
void ndr_print_drsuapi_DsReplicaModRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsReplicaModRequest *r);
void ndr_print_drsuapi_DsMembershipType(struct ndr_print *ndr, const char *name, enum drsuapi_DsMembershipType r);
void ndr_print_drsuapi_DsGetMembershipsCtr1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetMembershipsCtr1 *r);
void ndr_print_drsuapi_DsGetMembershipsCtr(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetMembershipsCtr *r);
void ndr_print_drsuapi_DsGetMembershipsRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetMembershipsRequest1 *r);
void ndr_print_drsuapi_DsGetMembershipsRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetMembershipsRequest *r);
void ndr_print_drsuapi_DsGetNT4ChangeLogFlags(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_drsuapi_DsGetNT4ChangeLogRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNT4ChangeLogRequest1 *r);
void ndr_print_drsuapi_DsGetNT4ChangeLogRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetNT4ChangeLogRequest *r);
void ndr_print_drsuapi_DsGetNT4ChangeLogInfo1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetNT4ChangeLogInfo1 *r);
void ndr_print_drsuapi_DsGetNT4ChangeLogInfo(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetNT4ChangeLogInfo *r);
void ndr_print_drsuapi_DsNameStatus(struct ndr_print *ndr, const char *name, enum drsuapi_DsNameStatus r);
void ndr_print_drsuapi_DsNameFlags(struct ndr_print *ndr, const char *name, enum drsuapi_DsNameFlags r);
void ndr_print_drsuapi_DsNameFormat(struct ndr_print *ndr, const char *name, enum drsuapi_DsNameFormat r);
void ndr_print_drsuapi_DsNameString(struct ndr_print *ndr, const char *name, const struct drsuapi_DsNameString *r);
void ndr_print_drsuapi_DsNameRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsNameRequest1 *r);
void ndr_print_drsuapi_DsNameRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsNameRequest *r);
void ndr_print_drsuapi_DsNameInfo1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsNameInfo1 *r);
void ndr_print_drsuapi_DsNameCtr1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsNameCtr1 *r);
void ndr_print_drsuapi_DsNameCtr(struct ndr_print *ndr, const char *name, const union drsuapi_DsNameCtr *r);
void ndr_print_drsuapi_DsSpnOperation(struct ndr_print *ndr, const char *name, enum drsuapi_DsSpnOperation r);
void ndr_print_drsuapi_DsWriteAccountSpnRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsWriteAccountSpnRequest1 *r);
void ndr_print_drsuapi_DsWriteAccountSpnRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsWriteAccountSpnRequest *r);
void ndr_print_drsuapi_DsWriteAccountSpnResult1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsWriteAccountSpnResult1 *r);
void ndr_print_drsuapi_DsWriteAccountSpnResult(struct ndr_print *ndr, const char *name, const union drsuapi_DsWriteAccountSpnResult *r);
void ndr_print_drsuapi_DsRemoveDSServerRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsRemoveDSServerRequest1 *r);
void ndr_print_drsuapi_DsRemoveDSServerRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsRemoveDSServerRequest *r);
void ndr_print_drsuapi_DsRemoveDSServerResult1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsRemoveDSServerResult1 *r);
void ndr_print_drsuapi_DsRemoveDSServerResult(struct ndr_print *ndr, const char *name, const union drsuapi_DsRemoveDSServerResult *r);
void ndr_print_drsuapi_DsGetDCInfoCtrLevels(struct ndr_print *ndr, const char *name, enum drsuapi_DsGetDCInfoCtrLevels r);
void ndr_print_drsuapi_DsGetDCInfoRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCInfoRequest1 *r);
void ndr_print_drsuapi_DsGetDCInfoRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetDCInfoRequest *r);
void ndr_print_drsuapi_DsGetDCInfo1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCInfo1 *r);
void ndr_print_drsuapi_DsGetDCInfoCtr1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCInfoCtr1 *r);
void ndr_print_drsuapi_DsGetDCInfo2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCInfo2 *r);
void ndr_print_drsuapi_DsGetDCInfoCtr2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCInfoCtr2 *r);
void ndr_print_drsuapi_DsGetDCInfo3(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCInfo3 *r);
void ndr_print_drsuapi_DsGetDCInfoCtr3(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCInfoCtr3 *r);
void ndr_print_drsuapi_DsGetDCConnection01(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCConnection01 *r);
void ndr_print_drsuapi_DsGetDCConnectionCtr01(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetDCConnectionCtr01 *r);
void ndr_print_drsuapi_DsGetDCInfoCtr(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetDCInfoCtr *r);
enum ndr_err_code ndr_push_drsuapi_DsReplicaObjectListItem(struct ndr_push *ndr, int ndr_flags, const struct drsuapi_DsReplicaObjectListItem *r);
enum ndr_err_code ndr_pull_drsuapi_DsReplicaObjectListItem(struct ndr_pull *ndr, int ndr_flags, struct drsuapi_DsReplicaObjectListItem *r);
void ndr_print_drsuapi_DsReplicaObjectListItem(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjectListItem *r);
void ndr_print_drsuapi_DsAddEntry_DirErr(struct ndr_print *ndr, const char *name, enum drsuapi_DsAddEntry_DirErr r);
void ndr_print_drsuapi_DsAddEntryRequest2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntryRequest2 *r);
void ndr_print_drsuapi_SecBufferType(struct ndr_print *ndr, const char *name, enum drsuapi_SecBufferType r);
void ndr_print_drsuapi_SecBuffer(struct ndr_print *ndr, const char *name, const struct drsuapi_SecBuffer *r);
void ndr_print_drsuapi_SecBufferDesc(struct ndr_print *ndr, const char *name, const struct drsuapi_SecBufferDesc *r);
void ndr_print_drsuapi_DsAddEntryRequest3(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntryRequest3 *r);
void ndr_print_drsuapi_DsAddEntryRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsAddEntryRequest *r);
void ndr_print_drsuapi_DsAddEntryErrorInfoX(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntryErrorInfoX *r);
void ndr_print_drsuapi_DsAddEntry_AttrErr_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntry_AttrErr_V1 *r);
void ndr_print_drsuapi_DsAddEntry_AttrErrListItem_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntry_AttrErrListItem_V1 *r);
void ndr_print_drsuapi_DsAddEntryErrorInfo_Attr_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntryErrorInfo_Attr_V1 *r);
void ndr_print_drsuapi_DsAddEntryErrorInfo_Name_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntryErrorInfo_Name_V1 *r);
void ndr_print_drsuapi_NameResOp_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_NameResOp_V1 *r);
void ndr_print_drsuapi_DsAddEntry_RefType(struct ndr_print *ndr, const char *name, enum drsuapi_DsAddEntry_RefType r);
void ndr_print_drsuapi_DsAddEntry_ChoiceType(struct ndr_print *ndr, const char *name, enum drsuapi_DsAddEntry_ChoiceType r);
void ndr_print_drsuapi_DsaAddressListItem_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsaAddressListItem_V1 *r);
void ndr_print_drsuapi_DsAddEntry_RefErrListItem_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntry_RefErrListItem_V1 *r);
void ndr_print_drsuapi_DsAddEntryErrorInfo_Referr_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntryErrorInfo_Referr_V1 *r);
void ndr_print_drsuapi_DsAddEntryErrorInfo(struct ndr_print *ndr, const char *name, const union drsuapi_DsAddEntryErrorInfo *r);
void ndr_print_drsuapi_DsAddEntry_ErrData_V1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntry_ErrData_V1 *r);
void ndr_print_drsuapi_DsAddEntry_ErrData(struct ndr_print *ndr, const char *name, const union drsuapi_DsAddEntry_ErrData *r);
void ndr_print_drsuapi_DsReplicaObjectIdentifier2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjectIdentifier2 *r);
void ndr_print_drsuapi_DsAddEntryCtr2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntryCtr2 *r);
void ndr_print_drsuapi_DsAddEntryCtr3(struct ndr_print *ndr, const char *name, const struct drsuapi_DsAddEntryCtr3 *r);
void ndr_print_drsuapi_DsAddEntryCtr(struct ndr_print *ndr, const char *name, const union drsuapi_DsAddEntryCtr *r);
void ndr_print_drsuapi_DsExecuteKCCFlags(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_drsuapi_DsExecuteKCC1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsExecuteKCC1 *r);
void ndr_print_drsuapi_DsExecuteKCCRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsExecuteKCCRequest *r);
void ndr_print_drsuapi_DsReplicaGetInfoLevel(struct ndr_print *ndr, const char *name, enum drsuapi_DsReplicaGetInfoLevel r);
void ndr_print_drsuapi_DsReplicaInfoType(struct ndr_print *ndr, const char *name, enum drsuapi_DsReplicaInfoType r);
void ndr_print_drsuapi_DsReplicaGetInfoRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaGetInfoRequest1 *r);
void ndr_print_drsuapi_DsReplicaGetInfoRequest2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaGetInfoRequest2 *r);
void ndr_print_drsuapi_DsReplicaGetInfoRequest(struct ndr_print *ndr, const char *name, const union drsuapi_DsReplicaGetInfoRequest *r);
void ndr_print_drsuapi_DsReplicaNeighbour(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaNeighbour *r);
void ndr_print_drsuapi_DsReplicaNeighbourCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaNeighbourCtr *r);
void ndr_print_drsuapi_DsReplicaCursorCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaCursorCtr *r);
void ndr_print_drsuapi_DsReplicaObjMetaData(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjMetaData *r);
void ndr_print_drsuapi_DsReplicaObjMetaDataCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjMetaDataCtr *r);
void ndr_print_drsuapi_DsReplicaKccDsaFailure(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaKccDsaFailure *r);
void ndr_print_drsuapi_DsReplicaKccDsaFailuresCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaKccDsaFailuresCtr *r);
void ndr_print_drsuapi_DsReplicaOpType(struct ndr_print *ndr, const char *name, enum drsuapi_DsReplicaOpType r);
void ndr_print_drsuapi_DsReplicaOp(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaOp *r);
void ndr_print_drsuapi_DsReplicaOpCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaOpCtr *r);
void ndr_print_drsuapi_DsReplicaAttrValMetaData(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaAttrValMetaData *r);
void ndr_print_drsuapi_DsReplicaAttrValMetaDataCtr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaAttrValMetaDataCtr *r);
void ndr_print_drsuapi_DsReplicaCursor2Ctr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaCursor2Ctr *r);
void ndr_print_drsuapi_DsReplicaCursor3(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaCursor3 *r);
void ndr_print_drsuapi_DsReplicaCursor3Ctr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaCursor3Ctr *r);
void ndr_print_drsuapi_DsReplicaObjMetaData2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjMetaData2 *r);
void ndr_print_drsuapi_DsReplicaObjMetaData2Ctr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaObjMetaData2Ctr *r);
void ndr_print_drsuapi_DsReplicaAttrValMetaData2(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaAttrValMetaData2 *r);
void ndr_print_drsuapi_DsReplicaAttrValMetaData2Ctr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaAttrValMetaData2Ctr *r);
void ndr_print_drsuapi_DsReplicaConnection04(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaConnection04 *r);
void ndr_print_drsuapi_DsReplicaConnection04Ctr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplicaConnection04Ctr *r);
void ndr_print_drsuapi_DsReplica06(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplica06 *r);
void ndr_print_drsuapi_DsReplica06Ctr(struct ndr_print *ndr, const char *name, const struct drsuapi_DsReplica06Ctr *r);
void ndr_print_drsuapi_DsReplicaInfo(struct ndr_print *ndr, const char *name, const union drsuapi_DsReplicaInfo *r);
void ndr_print_drsuapi_DsGetMemberships2Ctr(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetMemberships2Ctr *r);
void ndr_print_drsuapi_DsGetMemberships2Request1(struct ndr_print *ndr, const char *name, const struct drsuapi_DsGetMemberships2Request1 *r);
void ndr_print_drsuapi_DsGetMemberships2Request(struct ndr_print *ndr, const char *name, const union drsuapi_DsGetMemberships2Request *r);
void ndr_print_drsuapi_DsSiteCostInfo(struct ndr_print *ndr, const char *name, const struct drsuapi_DsSiteCostInfo *r);
void ndr_print_drsuapi_QuerySitesByCostCtr1(struct ndr_print *ndr, const char *name, const struct drsuapi_QuerySitesByCostCtr1 *r);
void ndr_print_drsuapi_QuerySitesByCostCtr(struct ndr_print *ndr, const char *name, const union drsuapi_QuerySitesByCostCtr *r);
void ndr_print_drsuapi_QuerySitesByCostRequest1(struct ndr_print *ndr, const char *name, const struct drsuapi_QuerySitesByCostRequest1 *r);
void ndr_print_drsuapi_QuerySitesByCostRequest(struct ndr_print *ndr, const char *name, const union drsuapi_QuerySitesByCostRequest *r);
enum ndr_err_code ndr_push_drsuapi_DsBind(struct ndr_push *ndr, int flags, const struct drsuapi_DsBind *r);
enum ndr_err_code ndr_pull_drsuapi_DsBind(struct ndr_pull *ndr, int flags, struct drsuapi_DsBind *r);
void ndr_print_drsuapi_DsBind(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsBind *r);
void ndr_print_drsuapi_DsUnbind(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsUnbind *r);
void ndr_print_drsuapi_DsReplicaSync(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsReplicaSync *r);
void ndr_print_drsuapi_DsGetNCChanges(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsGetNCChanges *r);
void ndr_print_drsuapi_DsReplicaUpdateRefs(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsReplicaUpdateRefs *r);
void ndr_print_drsuapi_DsReplicaAdd(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsReplicaAdd *r);
void ndr_print_drsuapi_DsReplicaDel(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsReplicaDel *r);
void ndr_print_drsuapi_DsReplicaMod(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsReplicaMod *r);
void ndr_print_DRSUAPI_VERIFY_NAMES(struct ndr_print *ndr, const char *name, int flags, const struct DRSUAPI_VERIFY_NAMES *r);
void ndr_print_drsuapi_DsGetMemberships(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsGetMemberships *r);
void ndr_print_DRSUAPI_INTER_DOMAIN_MOVE(struct ndr_print *ndr, const char *name, int flags, const struct DRSUAPI_INTER_DOMAIN_MOVE *r);
void ndr_print_drsuapi_DsGetNT4ChangeLog(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsGetNT4ChangeLog *r);
void ndr_print_drsuapi_DsCrackNames(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsCrackNames *r);
void ndr_print_drsuapi_DsWriteAccountSpn(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsWriteAccountSpn *r);
void ndr_print_drsuapi_DsRemoveDSServer(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsRemoveDSServer *r);
void ndr_print_DRSUAPI_REMOVE_DS_DOMAIN(struct ndr_print *ndr, const char *name, int flags, const struct DRSUAPI_REMOVE_DS_DOMAIN *r);
void ndr_print_drsuapi_DsGetDomainControllerInfo(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsGetDomainControllerInfo *r);
enum ndr_err_code ndr_push_drsuapi_DsAddEntry(struct ndr_push *ndr, int flags, const struct drsuapi_DsAddEntry *r);
enum ndr_err_code ndr_pull_drsuapi_DsAddEntry(struct ndr_pull *ndr, int flags, struct drsuapi_DsAddEntry *r);
void ndr_print_drsuapi_DsAddEntry(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsAddEntry *r);
void ndr_print_drsuapi_DsExecuteKCC(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsExecuteKCC *r);
void ndr_print_drsuapi_DsReplicaGetInfo(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsReplicaGetInfo *r);
void ndr_print_DRSUAPI_ADD_SID_HISTORY(struct ndr_print *ndr, const char *name, int flags, const struct DRSUAPI_ADD_SID_HISTORY *r);
void ndr_print_drsuapi_DsGetMemberships2(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_DsGetMemberships2 *r);
void ndr_print_DRSUAPI_REPLICA_VERIFY_OBJECTS(struct ndr_print *ndr, const char *name, int flags, const struct DRSUAPI_REPLICA_VERIFY_OBJECTS *r);
void ndr_print_DRSUAPI_GET_OBJECT_EXISTENCE(struct ndr_print *ndr, const char *name, int flags, const struct DRSUAPI_GET_OBJECT_EXISTENCE *r);
void ndr_print_drsuapi_QuerySitesByCost(struct ndr_print *ndr, const char *name, int flags, const struct drsuapi_QuerySitesByCost *r);
#endif /* _HEADER_NDR_drsuapi */
