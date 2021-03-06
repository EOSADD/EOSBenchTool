#ifndef PUSHMANAGER_H
#define PUSHMANAGER_H

#include <QObject>
#include <QString>

#include "codebase/chain/signedtransaction.h"

class HttpClient;

class PushManager : public QObject
{
    Q_OBJECT

public:
    PushManager(bool flag = true);
    ~PushManager();

    bool transferToken(const QString& fromAccount, const QString& toAccount, const QString& quantity);
    QString getLastTransactionId();

private:
    bool make_push(const QString& code, const QString& action, const QByteArray& input);

    QByteArray packGetRequiredKeysParam();
    QByteArray packPushTransactionParam();

private slots:
    void abi_json_to_bin_returned(const QByteArray& data);
    void get_info_returned(const QByteArray& data);
    void get_required_keys_returned(const QByteArray& data);
    void push_transaction_returned(const QByteArray& data);

signals:
    void oneRoundFinished();
    void trxPacked(const QByteArray& data);

private:
    HttpClient *httpc;

    bool result;
    bool sendTrx;

    QByteArray abiJsonToBinData;
    QByteArray getInfoData;
    QByteArray getRequiredKeysData;

    SignedTransaction signedTrx;

    QString actor;
    QString action;
    QString transactionId;
};

#endif // PUSHMANAGER_H
