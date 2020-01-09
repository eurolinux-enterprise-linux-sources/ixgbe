#ifndef DUP_H

#define NETIF_F_NTUPLE	(1 << 27) /* N-tuple filters supported */
#define NETIF_F_RXHASH	(1 << 28) /* Receive hashing offload */

#define ETH_FLAG_NTUPLE	(1 << 27) /* N-tuple filters enabled */
#define ETH_FLAG_RXHASH	(1 << 28)

#define IEEE_8021QAZ_TSA_STRICT		0
#define IEEE_8021QAZ_TSA_CB_SHABER	1
#define IEEE_8021QAZ_TSA_ETS		2
#define IEEE_8021QAZ_TSA_VENDOR		255

/* IEEE 802.1Qaz std supported values */
#define IEEE_8021QAZ_APP_SEL_ETHERTYPE	1
#define IEEE_8021QAZ_APP_SEL_STREAM	2
#define IEEE_8021QAZ_APP_SEL_DGRAM	3
#define IEEE_8021QAZ_APP_SEL_ANY	4

#endif /* DUP_H */
