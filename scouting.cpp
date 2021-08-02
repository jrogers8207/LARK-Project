#include "scouting.h"
#include <iostream>

void
scouting(const Player &player, const Enemy &enemy1, const Enemy &enemy2, const Enemy &enemy3, const Enemy &enemy4) {

    std::cout << "You, the " << player.getTitle()
              << ", in your unparalleled wisdom, have decided to scout ahead to assess the presence, amount, location, and distance away the "
              << enemy1.getName() << " are." << std::endl;
    std::cout << "In order to achieve this end, you, " << player.getName() << ", the " << player.getTitle()
              << ", will make use of the network utilities built into BASH." << std::endl;

    std::cout << "First, you, the " << player.getTitle()
              << ", feel that is best to check your own network configuration first." << std::endl;
    std::cout << "To do this, enter the following: ifconfig." << std::endl;

    std::string input;
    std::cin.ignore();
    while (input != "ifconfig") {
        std::cout << "Please check your own network configuration using the \"ifconfig\" command."
                  << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << "enp10s0: flags=4099<UP,BROADCAST,MULTICAST>  mtu 1500\n"
                 "        ether 70:85:c2:5a:9e:ba  txqueuelen 1000  (Ethernet)\n"
                 "        RX packets 0  bytes 0 (0.0 B)\n"
                 "        RX errors 0  dropped 0  overruns 0  frame 0\n"
                 "        TX packets 0  bytes 0 (0.0 B)\n"
                 "        TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0\n"
                 "        device memory 0xfc400000-fc41ffff  \n"
                 "\n"
                 "lo: flags=73<UP,LOOPBACK,RUNNING>  mtu 65536\n"
                 "        inet 127.0.0.1  netmask 255.0.0.0\n"
                 "        inet6 ::1  prefixlen 128  scopeid 0x10<host>\n"
                 "        loop  txqueuelen 1000  (Local Loopback)\n"
                 "        RX packets 369  bytes 128513 (125.5 KiB)\n"
                 "        RX errors 0  dropped 0  overruns 0  frame 0\n"
                 "        TX packets 369  bytes 128513 (125.5 KiB)\n"
                 "        TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0\n"
                 "\n"
                 "virbr0: flags=4099<UP,BROADCAST,MULTICAST>  mtu 1500\n"
                 "        inet 192.168.122.1  netmask 255.255.255.0  broadcast 192.168.122.255\n"
                 "        ether 52:54:00:c8:50:fe  txqueuelen 1000  (Ethernet)\n"
                 "        RX packets 0  bytes 0 (0.0 B)\n"
                 "        RX errors 0  dropped 0  overruns 0  frame 0\n"
                 "        TX packets 0  bytes 0 (0.0 B)\n"
                 "        TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0\n"
                 "\n"
                 "wlp8s0: flags=4163<UP,BROADCAST,RUNNING,MULTICAST>  mtu 1500\n"
                 "        inet 192.168.1.70  netmask 255.255.255.0  broadcast 192.168.1.255\n"
                 "        inet6 2600:1700:bab:4290:ebd8:3d6:c621:c4aa  prefixlen 64  scopeid 0x0<global>\n"
                 "        inet6 2600:1700:bab:4290::b  prefixlen 128  scopeid 0x0<global>\n"
                 "        inet6 fe80::2bc9:e2cf:849c:6a47  prefixlen 64  scopeid 0x20<link>\n"
                 "        ether f4:96:34:53:fa:c5  txqueuelen 1000  (Ethernet)\n"
                 "        RX packets 6470920  bytes 9403060733 (8.7 GiB)\n"
                 "        RX errors 0  dropped 28229  overruns 0  frame 0\n"
                 "        TX packets 554518  bytes 69658451 (66.4 MiB)\n"
                 "        TX errors 0  dropped 0 overruns 0  carrier 0  collisions 0" << std::endl << std::endl
              << std::endl;

    std::cout << "You, the " << player.getTitle() << ", figure that you, " << player.getTitle()
              << " should also check to see which enemies are present. You will accomplish this task using the ping command."
              << std::endl;
    std::cout << "The ping command is simple to use. To ping the enemy, you, the " << player.getTitle()
              << ", need only enter the following: ping \"insert enemy name here (website address)\". However, pinging the enemies infinitely may raise suspicion."
              << std::endl;
    std::cout << "To ping them a finite amount of times, you, the" << player.getTitle()
              << ", need enter the following instead: ping -c \"amount of pings\" \"insert enemy name here (website address)\"."
              << std::endl;
    std::cout << "First, check to see if there are any " << enemy1.getName() << " by pinging them 7 times."
              << std::endl;


    while (input != "ping -c 7 " + enemy1.getName()) {
        std::cout << "Please ping the enemy " << enemy1.getName() << " 7 times." << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << "PING nflra.com (23.236.62.147) 56(84) bytes of data.\n"
                 "64 bytes from 147.62.236.23.bc.googleusercontent.com (23.236.62.147): icmp_seq=1 ttl=103 time=41.7 ms\n"
                 "64 bytes from 147.62.236.23.bc.googleusercontent.com (23.236.62.147): icmp_seq=2 ttl=103 time=77.9 ms\n"
                 "64 bytes from 147.62.236.23.bc.googleusercontent.com (23.236.62.147): icmp_seq=3 ttl=103 time=44.8 ms\n"
                 "64 bytes from 147.62.236.23.bc.googleusercontent.com (23.236.62.147): icmp_seq=4 ttl=103 time=64.4 ms\n"
                 "64 bytes from 147.62.236.23.bc.googleusercontent.com (23.236.62.147): icmp_seq=5 ttl=103 time=71.5 ms\n"
                 "64 bytes from 147.62.236.23.bc.googleusercontent.com (23.236.62.147): icmp_seq=6 ttl=103 time=67.6 ms\n"
                 "64 bytes from 147.62.236.23.bc.googleusercontent.com (23.236.62.147): icmp_seq=7 ttl=103 time=43.9 ms\n"
                 "\n"
                 "--- nflra.com ping statistics ---\n"
                 "7 packets transmitted, 7 received, 0% packet loss, time 6008ms\n"
                 "rtt min/avg/max/mdev = 41.698/58.821/77.911/13.865 ms" << std::endl;
    std::cout << "It appears there are " << enemy1.getName() << " here." << std::endl << std::endl;

    std::cout << "Next, check to see if there is an enemy " << enemy2.getName() << " group by pinging them 3 times."
              << std::endl;

    while (input != "ping -c 3 " + enemy2.getName()) {
        std::cout << "Please ping the enemy " << enemy2.getName() << " 3 times." << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << "PING blockbuster.com (66.170.250.4) 56(84) bytes of data.\n"
                 "\n"
                 "--- blockbuster.com ping statistics ---\n"
                 "3 packets transmitted, 0 received, 100% packet loss, time 2083ms" << std::endl;
    std::cout << "It appears there is no " << enemy2.getName() << " group here." << std::endl << std::endl;


    std::cout << "Finally, check to see if there is an enemy " << enemy3.getName() << " group by pinging them 6 times."
              << std::endl;
    while (input != "ping -c 6 " + enemy3.getName()) {
        std::cout << "Please ping the enemy " << enemy3.getName() << " 6 times." << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << "PING patriots.com (151.101.1.153) 56(84) bytes of data.\n"
                 "64 bytes from 151.101.1.153 (151.101.1.153): icmp_seq=1 ttl=57 time=22.3 ms\n"
                 "64 bytes from 151.101.1.153 (151.101.1.153): icmp_seq=2 ttl=57 time=32.8 ms\n"
                 "64 bytes from 151.101.1.153 (151.101.1.153): icmp_seq=3 ttl=57 time=14.6 ms\n"
                 "64 bytes from 151.101.1.153 (151.101.1.153): icmp_seq=4 ttl=57 time=14.0 ms\n"
                 "64 bytes from 151.101.1.153 (151.101.1.153): icmp_seq=5 ttl=57 time=14.0 ms\n"
                 "64 bytes from 151.101.1.153 (151.101.1.153): icmp_seq=6 ttl=57 time=23.1 ms\n"
                 "\n"
                 "--- patriots.com ping statistics ---\n"
                 "6 packets transmitted, 6 received, 0% packet loss, time 5006ms\n"
                 "rtt min/avg/max/mdev = 13.961/20.133/32.769/6.829 ms" << std::endl;

    std::cout << "It appears there is a " << enemy3.getName() << " group here." << std::endl << std::endl << std::endl;


    std::cout << "You, the " << player.getTitle() << ", as an omniscient being, know that whenever there are "
              << enemy1.getName() << " and a " << enemy3.getName() << " group, there is also certainly a "
              << enemy4.getName() << " group." << std::endl;
    std::cout << "To check how far are the " << enemy4.getName() << " group is, you, the " << player.getTitle()
              << ", decide to use the \"traceroute\" command." << std::endl;

    std::cout << "The traceroute command is simple to use. To ping the enemy, you, the " << player.getTitle()
              << ", need only enter the following: traceroute \"insert enemy name here (website address)\"."
              << std::endl;

    while (input != "traceroute " + enemy4.getName()) {
        std::cout << "Please find your distance from the " << enemy4.getName() << " using the traceroute command."
                  << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << "traceroute to yahoo.com (98.137.11.164), 30 hops max, 60 byte packets\n"
                 " 1  dsldevice.attlocal.net (192.168.1.254)  2.658 ms  2.612 ms  2.590 ms\n"
                 " 2  104-182-52-1.lightspeed.rlghnc.sbcglobal.net (104.182.52.1)  2.570 ms  2.551 ms  2.533 ms\n"
                 " 3  99.173.77.16 (99.173.77.16)  5.405 ms  5.389 ms  5.370 ms\n"
                 " 4  12.123.138.230 (12.123.138.230)  31.089 ms  31.176 ms  31.159 ms\n"
                 " 5  attga21crs.ip.att.net (12.122.2.161)  31.288 ms  34.432 ms  31.393 ms\n"
                 " 6  attga403igs.ip.att.net (12.122.29.53)  31.229 ms  13.961 ms  13.870 ms\n"
                 " 7  192.205.33.42 (192.205.33.42)  13.826 ms  13.792 ms  13.758 ms\n"
                 " 8  * chi-b23-link.telia.net (62.115.113.19)  44.493 ms *\n"
                 " 9  sea-b2-link.telia.net (62.115.117.48)  77.653 ms  77.632 ms  77.608 ms\n"
                 "10  yahoo-ic-328472-sea-b2.c.telia.net (62.115.61.122)  88.117 ms yahoo-ic-328471-sea-b2.c.telia.net (62.115.36.197)  84.095 ms yahoo-ic-328472-sea-b2.c.telia.net (62.115.61.122)  88.073 ms\n"
                 "11  UNKNOWN-216-115-97-X.yahoo.com (216.115.97.107)  91.649 ms ae-7.pat1.gqb.yahoo.com (216.115.96.45)  94.273 ms  107.246 ms\n"
                 "12  et-0-0-0.msr1.gq1.yahoo.com (66.196.67.97)  107.193 ms et-1-0-0.msr2.gq1.yahoo.com (66.196.67.113)  107.167 ms et-18-1-0.msr2.gq1.yahoo.com (66.196.67.115)  107.144 ms\n"
                 "13  et-0-0-0.clr2-a-gdc.gq1.yahoo.com (67.195.37.73)  107.120 ms  81.417 ms et-19-1-0.clr2-a-gdc.gq1.yahoo.com (67.195.37.99)  95.146 ms\n"
                 "14  lo0.fab5-2-gdc.gq1.yahoo.com (68.180.235.6)  88.686 ms lo0.fab6-2-gdc.gq1.yahoo.com (68.180.235.7)  88.465 ms lo0.fab7-2-gdc.gq1.yahoo.com (68.180.235.8)  93.632 ms\n"
                 "15  lo0.fab8-1-gdc.gq2.yahoo.com (98.136.159.240)  88.356 ms lo0.fab5-1-gdc.gq2.yahoo.com (98.136.159.243)  88.377 ms lo0.fab8-1-gdc.gq2.yahoo.com (98.136.159.240)  88.314 ms\n"
                 "16  usw1-1-lbc.gq2.yahoo.com (98.136.158.192)  88.338 ms  88.320 ms  88.302 ms\n"
                 "17  media-router-fp73.prod.media.vip.gq1.yahoo.com (98.137.11.164)  88.242 ms  88.224 ms  88.206 ms"
              << std::endl << std::endl;
    std::cout << "You, the " << player.getTitle()
              << ", with your uncanny awareness, notice that there is an unknown enemy at hop 7." << std::endl;

    std::cout << "You, the " << player.getTitle()
              << ", feel that it is probably smart to lookup what the name of that enemy is, using the \"nslookup\" command."
              << std::endl;
    std::cout
            << "To use the \"nslookup\" command, you (not this time :P) need only to enter the following: nslookup \"insert enemy ip address here\"."
            << std::endl;

    while (input != "nslookup 192.205.33.42") {
        std::cout << "Please the name of the enemy at hop 7 using the nslookup command."
                  << std::endl;
        std::getline(std::cin, input);
    }
    std::cout << "As it turns out, it is only another " << enemy3.getName() << " group" << std::endl;
    std::cout << "You, the " << player.getTitle()
              << " are also able to find the ip address of an enemy (website address) using the enemy name (website address) in place of the ip address. However, you (got you again :O) feel that is not needed at this time. Perhaps it will come in handy another day."
              << std::endl << std::endl;

    std::cout << "You have finished scouting the enemies." << std::endl;

}
