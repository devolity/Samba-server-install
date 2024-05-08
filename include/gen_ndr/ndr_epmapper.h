/* header auto-generated by pidl */

#include <ndr.h>
#include <gen_ndr/epmapper.h>

#ifndef _HEADER_NDR_epmapper
#define _HEADER_NDR_epmapper

#define NDR_EPMAPPER_UUID "e1af8308-5d1f-11c9-91a4-08002b14a0fa"
#define NDR_EPMAPPER_VERSION 3.0
#define NDR_EPMAPPER_NAME "epmapper"
#define NDR_EPMAPPER_HELPSTRING "EndPoint Mapper"
extern const struct ndr_interface_table ndr_table_epmapper;
#define NDR_EPM_INSERT (0x00)

#define NDR_EPM_DELETE (0x01)

#define NDR_EPM_LOOKUP (0x02)

#define NDR_EPM_MAP (0x03)

#define NDR_EPM_LOOKUPHANDLEFREE (0x04)

#define NDR_EPM_INQOBJECT (0x05)

#define NDR_EPM_MGMTDELETE (0x06)

#define NDR_EPM_MAPAUTH (0x07)

#define NDR_EPMAPPER_CALL_COUNT (8)
void ndr_print_epm_protocol(struct ndr_print *ndr, const char *name, enum epm_protocol r);
void ndr_print_epm_rhs_dnet_nsp(struct ndr_print *ndr, const char *name, const struct epm_rhs_dnet_nsp *r);
void ndr_print_epm_rhs_osi_tp4(struct ndr_print *ndr, const char *name, const struct epm_rhs_osi_tp4 *r);
void ndr_print_epm_rhs_osi_clns(struct ndr_print *ndr, const char *name, const struct epm_rhs_osi_clns *r);
void ndr_print_epm_rhs_udp(struct ndr_print *ndr, const char *name, const struct epm_rhs_udp *r);
void ndr_print_epm_rhs_tcp(struct ndr_print *ndr, const char *name, const struct epm_rhs_tcp *r);
void ndr_print_epm_rhs_ip(struct ndr_print *ndr, const char *name, const struct epm_rhs_ip *r);
void ndr_print_epm_rhs_ncadg(struct ndr_print *ndr, const char *name, const struct epm_rhs_ncadg *r);
void ndr_print_epm_rhs_ncacn(struct ndr_print *ndr, const char *name, const struct epm_rhs_ncacn *r);
void ndr_print_epm_rhs_uuid(struct ndr_print *ndr, const char *name, const struct epm_rhs_uuid *r);
void ndr_print_epm_rhs_ipx(struct ndr_print *ndr, const char *name, const struct epm_rhs_ipx *r);
void ndr_print_epm_rhs_smb(struct ndr_print *ndr, const char *name, const struct epm_rhs_smb *r);
void ndr_print_epm_rhs_named_pipe(struct ndr_print *ndr, const char *name, const struct epm_rhs_named_pipe *r);
void ndr_print_epm_rhs_netbios(struct ndr_print *ndr, const char *name, const struct epm_rhs_netbios *r);
void ndr_print_epm_rhs_netbeui(struct ndr_print *ndr, const char *name, const struct epm_rhs_netbeui *r);
void ndr_print_epm_rhs_spx(struct ndr_print *ndr, const char *name, const struct epm_rhs_spx *r);
void ndr_print_epm_rhs_nb_ipx(struct ndr_print *ndr, const char *name, const struct epm_rhs_nb_ipx *r);
void ndr_print_epm_rhs_http(struct ndr_print *ndr, const char *name, const struct epm_rhs_http *r);
void ndr_print_epm_rhs_unix_ds(struct ndr_print *ndr, const char *name, const struct epm_rhs_unix_ds *r);
void ndr_print_epm_rhs_null(struct ndr_print *ndr, const char *name, const struct epm_rhs_null *r);
void ndr_print_epm_rhs_ncalrpc(struct ndr_print *ndr, const char *name, const struct epm_rhs_ncalrpc *r);
void ndr_print_epm_rhs_appletalk(struct ndr_print *ndr, const char *name, const struct epm_rhs_appletalk *r);
void ndr_print_epm_rhs_atalk_stream(struct ndr_print *ndr, const char *name, const struct epm_rhs_atalk_stream *r);
void ndr_print_epm_rhs_atalk_datagram(struct ndr_print *ndr, const char *name, const struct epm_rhs_atalk_datagram *r);
void ndr_print_epm_rhs_vines_spp(struct ndr_print *ndr, const char *name, const struct epm_rhs_vines_spp *r);
void ndr_print_epm_rhs_vines_ipc(struct ndr_print *ndr, const char *name, const struct epm_rhs_vines_ipc *r);
void ndr_print_epm_rhs_streettalk(struct ndr_print *ndr, const char *name, const struct epm_rhs_streettalk *r);
void ndr_print_epm_rhs(struct ndr_print *ndr, const char *name, const union epm_rhs *r);
void ndr_print_epm_lhs(struct ndr_print *ndr, const char *name, const struct epm_lhs *r);
void ndr_print_epm_floor(struct ndr_print *ndr, const char *name, const struct epm_floor *r);
void ndr_print_epm_tower(struct ndr_print *ndr, const char *name, const struct epm_tower *r);
void ndr_print_epm_twr_t(struct ndr_print *ndr, const char *name, const struct epm_twr_t *r);
void ndr_print_epm_entry_t(struct ndr_print *ndr, const char *name, const struct epm_entry_t *r);
void ndr_print_rpc_if_id_t(struct ndr_print *ndr, const char *name, const struct rpc_if_id_t *r);
void ndr_print_epm_InquiryType(struct ndr_print *ndr, const char *name, enum epm_InquiryType r);
void ndr_print_epm_VersionOption(struct ndr_print *ndr, const char *name, enum epm_VersionOption r);
void ndr_print_epm_twr_p_t(struct ndr_print *ndr, const char *name, const struct epm_twr_p_t *r);
void ndr_print_epm_Insert(struct ndr_print *ndr, const char *name, int flags, const struct epm_Insert *r);
void ndr_print_epm_Delete(struct ndr_print *ndr, const char *name, int flags, const struct epm_Delete *r);
void ndr_print_epm_Lookup(struct ndr_print *ndr, const char *name, int flags, const struct epm_Lookup *r);
enum ndr_err_code ndr_push_epm_Map(struct ndr_push *ndr, int flags, const struct epm_Map *r);
enum ndr_err_code ndr_pull_epm_Map(struct ndr_pull *ndr, int flags, struct epm_Map *r);
void ndr_print_epm_Map(struct ndr_print *ndr, const char *name, int flags, const struct epm_Map *r);
void ndr_print_epm_LookupHandleFree(struct ndr_print *ndr, const char *name, int flags, const struct epm_LookupHandleFree *r);
void ndr_print_epm_InqObject(struct ndr_print *ndr, const char *name, int flags, const struct epm_InqObject *r);
void ndr_print_epm_MgmtDelete(struct ndr_print *ndr, const char *name, int flags, const struct epm_MgmtDelete *r);
void ndr_print_epm_MapAuth(struct ndr_print *ndr, const char *name, int flags, const struct epm_MapAuth *r);
#endif /* _HEADER_NDR_epmapper */
