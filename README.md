# About


**EOSBenchTool** is a PC cross-platform, EOS pressure testing tool, which is developed by [OracleChain.io](https://oraclechain.io).

------------------------------

# Menu
* [Overview](#1)
* [Environment](#2)
* [Functions](#3)
* [bout OracleChain](#4)
* [Liecnse](#4)

------------------------------

<h2 id="1">Overview</h2>


The EOSBenchTool program is a benchmark testing tool build on EOSIO ecology. It provides a stress testing method based on account creation, transfer and other functions, to test the TPS of EOS node. 

EOSBenchTool client prepares a batch of transactions, then uses the pushTransactions to sends transactions to EOS node to save the client's packaging, signature time, use the limited client to maximize the pressure test on the server as far as possible!


------------------------------
<h2 id="2">ENVIRONMENT</h2>

**ENVIRONMENT：**

> MACOS、WINDOWS、UBUNTU

> [QT](https://www.qt.io/download) >= 5.8 just need to import and build the project with [QT](https://www.qt.io/download))

**DEPENDENCYS:**

> our ECDSA is based on micro-ecc

> https://github.com/kmackay/micro-ecc

> We build a Publicly Verifiable Secret Sharing on secp256k1 which is published by Schoenmakers on crypto99 conference.

> https://github.com/songgeng87/PubliclyVerifiableSecretSharing


**Any questions pls join our official Telegram Group below**

> 中文群：https://t.me/OracleChainChatCN

> ENGLISH GROUP：https://t.me/OracleChainChat


<h2 id="3">Functions</h2>

### Prepation
>You should first set contract, create token, issue token, then you can use this tool to testing nodeos' performance.<br>
`cleos -u http://127.0.0.1:8888/  set contract eosio.token ./eosio.token -p eosio.token`<br>
`cleos -u http://127.0.0.1:8888/   push action eosio.token create '{"issuer": "eosio", "maximum_supply": "100000000.0000 EOS", "can_freeze": 0, "can_recall": 0, "can_whitelist": 0}' -p eosio.token`<br>
`cleos -u http://127.0.0.1:8888/    push action eosio.token issue '[ "eosio", "100000000.0000 EOS", "m" ]' -p eosio`

### Settings
![](https://github.com/OracleChain/EOSBenchTool/blob/master/screenshots/setting.PNG)
* Host address <br>
 EOS node ip
* Port <br>
 EOS node port
* Thread number <br>
 recommended to be your computer's  cpu number.
* Transaction Pool Size, Total tokens <br>
 "Transaction Pool Size" * 0.0001(each transaction send 0.00001 token)="Total tokens"
* Transaction batch size <br>
 transactions number in one `push_transactions` interface.

### Test
![](https://github.com/OracleChain/EOSBenchTool/blob/master/screenshots/testing.png)
>first swittch `Settings` page to complete settings, second switch page to `Benchmark Testing` page, and then click `Prepare` button and wait for preparation process completion, then click `Start` button to send prepared transactions, wait until the testing result shows on the right of tool interface.

> Max tps means<br>
  the max tps(transactions per second) during testing duration.

>ATTENTION<br>
 You should always reopen EOSBenchTool to restart a new testing.

------------------------------
<h2 id="4">About OracleChain</h2>


As the world’s first application built on an EOS ecosphere, OracleChain needs to meet the demands of the Oracle (oracle machine) ecosystem by efficiently linking blockchain technology services with various real-life scenarios, thereby delving into this immense tens of billions of dollars valuation market.


As a decentralized Oracle technology platform based on the EOS platform, the autonomous Proof-of-Reputation & Deposit mechanism is adopted and used as a fundamental service for other blockchain applications.In addition to Oracle services that provide real-world data to the blockchain, Oracle services that provide cross-chain data are also offered. Given that OracleChain can accomplish the functions of several prediction market applications, such as Augur and Gnosis, OracleChain can also support smart contract businesses that require high-frequency access to outside data in certain scenarios, such as Robo-Advisor.


OracleChain will nurture and serve those blockchain applications that change the real world. Our mission is to “Link Data, Link World,” with the aim of becoming the infrastructure linking the real world with the blockchain world.


By achieving intra-chain and extra-chain data connectivity, we aspire to create a service provisioning platform that can most efficiently gain access to extra-chain data in the future blockchain world.

<h2 id="5">LICENSE</h2>

**License**

Released under GNU/LGPL Version 3
