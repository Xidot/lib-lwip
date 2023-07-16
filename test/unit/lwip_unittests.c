#include "lwip_check.h"

#include "ip4/test_ip4.h"
#include "ip6/test_ip6.h"
#include "udp/test_udp.h"
#include "tcp/test_tcp.h"
#include "tcp/test_tcp_oos.h"
#include "core/test_def.h"
#include "core/test_mem.h"
#include "core/test_netif.h"
#include "core/test_pbuf.h"
#include "core/test_timers.h"
#include "etharp/test_etharp.h"
#include "dhcp/test_dhcp.h"
#include "mdns/test_mdns.h"
#include "mqtt/test_mqtt.h"
#include "api/test_sockets.h"

#include "lwip/init.h"
#if !NO_SYS
#include "lwip/tcpip.h"
#endif

// TODO modify this file to autoload the test cases in UKTEST

/* This function is used for LWIP_RAND by some ports... */
unsigned int
lwip_port_rand(void)
{
  return rand();
}

//Suite* create_suite(const char* name, testfunc *tests, size_t num_tests, SFun setup, SFun teardown)
//{
//    //
//}

//void lwip_check_ensure_no_alloc(unsigned int skip)
//{
//  int i;
//  unsigned int mask;
//
//  if (!(skip & SKIP_HEAP)) {
//    UK_TEST_EXPECT(lwip_stats.mem.used == 0);
//  }
//  for (i = 0, mask = 1; i < MEMP_MAX; i++, mask <<= 1) {
//    if (!(skip & mask)) {
//      UK_TEST_EXPECT(lwip_stats.memp[i]->used == 0);
//    }
//  }
//}

int lwip_unittests_run(void)
{
    // All of these are already registered using the UK test api.
}
