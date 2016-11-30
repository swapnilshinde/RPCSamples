/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _GREATER_LOWER_H_RPCGEN
#define _GREATER_LOWER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	int n1;
	int n2;
	int n3;
};
typedef struct numbers numbers;

struct response {
	int greater;
	int lower;
};
typedef struct response response;

#define GREATER 1
#define GREATER_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define CALCULATE 1
extern  response * calculate_1(numbers *, CLIENT *);
extern  response * calculate_1_svc(numbers *, struct svc_req *);
extern int greater_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define CALCULATE 1
extern  response * calculate_1();
extern  response * calculate_1_svc();
extern int greater_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);
extern  bool_t xdr_response (XDR *, response*);

#else /* K&R C */
extern bool_t xdr_numbers ();
extern bool_t xdr_response ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GREATER_LOWER_H_RPCGEN */