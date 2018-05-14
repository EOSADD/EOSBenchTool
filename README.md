# About


**EOSBenchTool** is a PC cross-platform, EOS pressure testing tool, which is developed by [OracleChain.io](https://oraclechain.io).

------------------------------

# Menu
* [Overview](#1)
* [Environment](#2)
* [Functions](#3)
* [About OracleChain](#4)
* [Liecnse](#4)

------------------------------

<h2 id="1">Overview</h2>


The EOSBenchTool is a EOS pressure testing tool. 

EOSBenchTool client prepares a batch of transactions to save the client's packaging, signature time, then use push_transactions to sends transactions to EOS node, use the limited clients to maximize the pressure test on the server!


------------------------------
<h2 id="2">ENVIRONMENT</h2>

**ENVIRONMENT：**

> MACOS、WINDOWS、UBUNTU

> [QT](https://www.qt.io/download) >= 5.8 just need to import and build the project with [QT](https://www.qt.io/download))

**DOWNLOAD & TRY**

|Version|MD5|
|------|---|
|[WINDOWS_v1.0(compliant with DAWN-2018-04-27-ALPHA)](https://github.com/OracleChain/EOSBenchTool/raw/master/EOSBenchTool_Windows_Release.zip)|eec548fc2d760e65bed9c0c508dd6e92|

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
>First set contract, create token, issue token, and then use this tool to testing nodeos' performance.<br>
You can refer to [Tutorial eosio token Contract](https://github.com/EOSIO/eos/wiki/Tutorial-eosio-token-Contract) or using following command:<br>
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
 Recommended to be your computer's CPU number.
* Transaction Pool Size, Total tokens <br>
 "Transaction Pool Size" * 0.0001(each transaction send 0.0001 token)="Total tokens"
* Transaction batch size <br>
 Transactions number in one `push_transactions`.

### Test
![](https://github.com/OracleChain/EOSBenchTool/blob/master/screenshots/testing.png)
>first switch `Settings` page to complete settings, second switch to `Benchmark Testing` page, and then click `Prepare` button and wait for preparation process completion, then click `Start` button to send prepared transactions, wait until the testing result shows on the right of tool interface.

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
