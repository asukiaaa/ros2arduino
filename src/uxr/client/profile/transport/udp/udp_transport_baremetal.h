#ifndef _UXR_CLIENT_UDP_TRANSPORT_BAREMETAL_H_
#define _UXR_CLIENT_UDP_TRANSPORT_BAREMETAL_H_

#include <uxr/client/config.h>

#if defined(PLATFORM_NAME_BAREMETAL)

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct uxrUDPPlatform
{
  int socket_fd;
  void* udp_instance;
} uxrUDPPlatform;


#ifdef __cplusplus
}
#endif

#endif //PLATFORM_NAME_BAREMETAL

#endif //_UXR_CLIENT_UDP_TRANSPORT_BAREMETAL_H_