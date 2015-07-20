#ifndef MCRPCSERVICE_H
#define MCRPCSERVICE_H



#include <qjsonrpcservice.h>

class MCRPCService : public QJsonRpcService
{

    typedef int64_t time64_t;

private:
    Q_OBJECT
    Q_CLASSINFO("serviceName", "moneychanger")

public:
    MCRPCService(QObject *parent = 0);

public Q_SLOTS:

    // opentxs::OTAPI methods
    QJsonValue numListAdd(QString NumList, QString Numbers);
    QJsonValue numListRemove(QString NumList, QString Numbers);
    QJsonValue numListVerifyQuery(QString NumList, QString Numbers);
    QJsonValue numListVerifyAll(QString NumList, QString Numbers);
    QJsonValue numListCount(QString NumList);
    QJsonValue createNym(int32_t KeySize, QString NymIDSource,
                         QString AltLocation);
    QJsonValue getNymActiveCronItemIDs(QString NymID, QString NotaryID);
    QJsonValue getActiveCronItem(QString NotaryID, int64_t TransNum);
    QJsonValue getNymSourceForID(QString NymID);
    QJsonValue getNymAltSourceLocation(QString NymID);
    QJsonValue getNymCredentialCount(QString NymID);
    QJsonValue getNymCredentialID(QString NymID, int32_t Index);
    QJsonValue getNymCredentialContents(QString NymID, QString CredentialID);
    QJsonValue getNymRevokedCount(QString NymID);
    QJsonValue getNymRevokedCredID(QString NymID, int32_t Index);
    QJsonValue getNymRevokedCredContents(QString NymID, QString CredentialID);
    QJsonValue getNymSubCredentialCount(QString NymID, QString MasterCredID);
    QJsonValue getNymSubCredentialID(QString NymID, QString MasterCredID,
                                     int32_t Index);
    QJsonValue getNymSubCredentialContents(QString NymID, QString MasterCredID,
                                           QString SubCredID);
    QJsonValue addSubCredential(QString NymID, QString MasterCredID,
                                int32_t KeySize);
    QJsonValue revokeSubcredential(QString NymID, QString MasterCredID,
                                   QString SubCredID);
    QJsonValue getSignerNymID(QString Contract);
    QJsonValue calculateAssetContractID(QString Contract);
    QJsonValue calculateServerContractID(QString Contract);
    QJsonValue calculateContractID(QString Contract);
    QJsonValue createServerContract(QString NymID, QString XMLContents);
    QJsonValue createAssetContract(QString NymID, QString XMLContents);
    QJsonValue getServerContract(QString NotaryID);
    QJsonValue getCurrencyFactor(QString InstrumentDefinitionID);
    QJsonValue getCurrencyDecimalPower(QString InstrumentDefinitionID);
    QJsonValue getCurrencyTLA(QString InstrumentDefinitionID);
    QJsonValue getCurrencySymbol(QString InstrumentDefinitionID);
    QJsonValue stringToAmountLocale(QString InstrumentDefinitionID, QString Input,
                                    QString ThousandsSep, QString DecimalPoint);
    QJsonValue formatAmountLocale(QString InstrumentDefinitionID, int64_t Amount,
                                  QString ThousandsSep, QString DecimalPoint);
    QJsonValue formatAmountWithoutSymbolLocale(QString InstrumentDefinitionID, int64_t Amount,
                                               QString ThousandsSep, QString DecimalPoint);
    QJsonValue stringToAmount(QString InstrumentDefinitionID, QString Input);
    QJsonValue formatAmount(QString InstrumentDefinitionID, int64_t Amount);
    QJsonValue formatAmountWithoutSymbol(QString InstrumentDefinitionID, int64_t Amount);
    QJsonValue getAssetTypeContract(QString InstrumentDefinitionID);
    QJsonValue addServerContract(QString Contract);
    QJsonValue addAssetContract(QString Contract);
    QJsonValue getNymCount();
    QJsonValue getServerCount();
    QJsonValue getAssetTypeCount();
    QJsonValue getAccountCount();
    QJsonValue walletCanRemoveServer(QString NotaryID);
    QJsonValue walletRemoveServer(QString NotaryID);
    QJsonValue walletCanRemoveAssetType(QString InstrumentDefinitionID);
    QJsonValue walletRemoveAssetType(QString InstrumentDefinitionID);
    QJsonValue walletCanRemoveNym(QString NymID);
    QJsonValue walletRemoveNym(QString NymID);
    QJsonValue walletCanRemoveAccount(QString AccountID);
    QJsonValue doesBoxReceiptExist(QString NotaryID, QString NymID,
                                   QString AccountID, int32_t BoxType,
                                   int64_t TransactionNumber);
    QJsonValue getBoxReceipt(QString NotaryID, QString NymID,
                                   QString AccountID, int32_t BoxType,
                                   int64_t TransactionNumber);
    QJsonValue deleteAssetAccount(QString NotaryID, QString NymID, QString AccountID);
    QJsonValue walletExportNym(QString NymID);
    QJsonValue walletExportCert(QString NymID);
    QJsonValue walletImportNym(QString FileContents);
    QJsonValue walletImportCert(QString DisplayName, QString FileContents);
// QJsonValue walletChangePassphrase(void);
    QJsonValue walletGetNymIdFromPartial(QString PartialID);
    QJsonValue walletGetNotaryIdFromPartial(QString PartialID);
    QJsonValue walletGetInstrumentDefinitionIdFromPartial(QString PartialID);
    QJsonValue walletGetAccountIdFromPartial(QString PartialID);
    QJsonValue getNymID(int32_t Index);
    QJsonValue getNymName(QString NymID);
    QJsonValue isNymRegisteredAtServer(QString NymID, QString NotaryID);
    QJsonValue getNymStats(QString NymID);
    QJsonValue getNymNymboxHash(QString NotaryID, QString NymID);
    QJsonValue getNymRecentHash(QString NotaryID, QString NymID);
    QJsonValue getNymInboxHash(QString NotaryID, QString NymID);
    QJsonValue getNymOutboxHash(QString NotaryID, QString NymID);
    QJsonValue getNymMailCount(QString NymID);
    QJsonValue getNymContentsByIndex(QString NymID, int32_t Index);
    QJsonValue getNymMailSenderIDByIndex(QString NymID, int32_t Index);
    QJsonValue getNymMailNotaryIDByIndex(QString NymID, int32_t Index);
    QJsonValue nymRemoveMailByIndex(QString NymID, int32_t Index);
    QJsonValue nymVerifyMailByIndex(QString NymID, int32_t Index);
    QJsonValue getNymOutmailCount(QString NymID);
    QJsonValue getNymOutmailContentsByIndex(QString NymID, int32_t Index);
    QJsonValue getNymOutmailRecipientIDByIndex(QString NymID, int32_t Index);
    QJsonValue getNymOutmailNotaryIDByIndex(QString NymID, int32_t Index);
    QJsonValue nymRemoveOutmailByIndex(QString NymID, int32_t Index);
    QJsonValue nymVerifyOutmailByIndex(QString NymID, int32_t Index);
    QJsonValue getNymOutpaymentsCount(QString NymID);
    QJsonValue getNymOutpaymentsContentsByIndex(QString NymID, int32_t Index);
    QJsonValue getNymOutpaymentsRecipientIDByIndex(QString NymID, int32_t Index);
    QJsonValue getNymOutpaymentsNotaryIDByIndex(QString NymID, int32_t Index);
    QJsonValue nymRemoveOutpaymentsByIndex(QString NymID, int32_t Index);
    QJsonValue nymVerifyOutpaymentsByIndex(QString NymID, int32_t Index);
    QJsonValue instrumentGetAmount(QString Instrument);
    QJsonValue instrumentGetTransactionNumber(QString Instrument);
    QJsonValue instrumentGetValidFrom(QString Instrument);
    QJsonValue instrumentGetValidTo(QString Instrument);
    QJsonValue instrumentGetType(QString Instrument);
    QJsonValue instrumentGetMemo(QString Instrument);
    QJsonValue instrumentGetNotaryID(QString Instrument);
    QJsonValue instrumentGetInstrumentDefinitionID(QString Instrument);
    QJsonValue instrumentGetRemitterNymID(QString Instrument);
    QJsonValue instrumentGetRemitterAccountID(QString Instrument);
    QJsonValue instrumentGetSenderNymID(QString Instrument);
    QJsonValue instrumentGetSenderAccountID(QString Instrument);
    QJsonValue instrumentGetRecipientNymID(QString Instrument);
    QJsonValue instrumentGetRecipientAccountID(QString Instrument);
    QJsonValue setNymName(QString NymID, QString SignerNymID,
                          QString NewName);
    QJsonValue setServerName(QString NotaryID, QString NewName);
    QJsonValue setAssetTypeName(QString InstrumentDefinitionID, QString NewName);
    QJsonValue getNymTransactionNumberCount(QString NotaryID, QString NymID);
    QJsonValue getServerID(int32_t Index);
    QJsonValue getServerName(QString ServerID);
    QJsonValue getAssetTypeID(int32_t Index);
    QJsonValue getAssetTypeName(QString AssetTypeID);
    QJsonValue getAssetTypeTLA(QString AssetTypeID);
    QJsonValue getAccountWalletID(int32_t Index);
    QJsonValue getAccountWalletName(QString AccountWalletID);
    QJsonValue getAccountWalletInboxHash(QString AccountWalletID);
    QJsonValue getAccountWalletOutboxHash(QString AccountWalletID);
    QJsonValue getTime(void);
    QJsonValue encode(QString Plaintext, bool LineBreaks);
    QJsonValue decode(QString Plaintext, bool LineBreaks);
    QJsonValue encrypt(QString RecipientNymID, QString Plaintext);
    QJsonValue decrypt(QString RecipientNymID, QString CipherText);
    QJsonValue createSymmetricKey(void);
    QJsonValue symmetricEncrypt(QString SymmetricKey, QString Plaintext);
    QJsonValue symmetricDecrypt(QString SymmetricKey, QString CipherTextEnvelope);
    QJsonValue signContract(QString SignerNymID, QString Contract);
    QJsonValue flatSign(QString SignerNymID, QString Input,
                        QString ContractType);
    QJsonValue addSignature(QString SignerNymID, QString Contract);
    QJsonValue verifySignature(QString SignerNymID, QString Contract);
    QJsonValue verifyAndRetrieveXMLContents(QString Contract, QString SignerID);
    QJsonValue verifyAccountReceipt(QString NotaryID, QString NymID,
                                    QString AccountID);
    QJsonValue setAccountWalletName(QString AccountID, QString SignerNymID,
                                    QString AccountName);
    QJsonValue getAccountWalletBalance(QString AccountWalletID);
    QJsonValue getAccountWalletType(QString AccountWalletID);
    QJsonValue getAccountWalletInstrumentDefinitionID(QString AccountWalletID);
    QJsonValue getAccountWalletNotaryID(QString AccountWalletID);
    QJsonValue getAccountWalletNymID(QString AccountWalletID);
    QJsonValue writeCheque(QString NotaryID, int64_t ChequeAmount,
                           time64_t ValidFrom, time64_t ValidTo,
                           QString SenderAccountID, QString SenderNymID,
                           QString ChequeMemo, QString RecipientNymID);
    QJsonValue discardCheque(QString NotaryId, QString NymID,
                             QString AccountID, QString Cheque);
    QJsonValue proposePaymentPlan(QString NotaryID, time64_t ValidFrom,
                                  time64_t ValidTo, QString SenderAccountID,
                                  QString SenderNymID, QString PlanConsideration,
                                  QString RecipientAccountID, QString RecipientNymID,
                                  int64_t InitialPaymentAmount, time64_t InitialPaymentDelay,
                                  int64_t PaymentPlanAmount, time64_t PaymentPlanDelay,
                                  time64_t PaymentPlanPeriod, time64_t PaymentPlanLength,
                                  int32_t MaxPayments);
    QJsonValue easyProposePlan(QString NotaryID, QString DateRange,
                               QString SenderAccountID, QString SenderNymID,
                               QString PlanConsideration, QString RecipientAccountID,
                               QString RecipientNymID, QString InitialPayment,
                               QString PaymentPlan, QString PlanExpiry);
    QJsonValue confirmPaymentPlan(QString NotaryID, QString SenderNymID,
                                  QString SenderAccountID, QString RecipientNymID,
                                  QString PaymentPlan);
    QJsonValue createSmartContract(QString SignerNymID, time64_t ValidFrom,
                                   time64_t ValidTo, bool SpecifyAssets,
                                   bool SpecifyParties);
    QJsonValue smartContractSetDates(QString Contract, QString SignerNymID,
                                     time64_t ValidFrom, time64_t ValidTo);
    QJsonValue smartArePartiesSpecified(QString Contract);
    QJsonValue smartAreAssetTypesSpecified(QString Contract);
    QJsonValue smartContractAddBylaw(QString Contract, QString SignerNymID,
                                     QString BylawName);
    QJsonValue smartContractAddClause(QString Contract, QString SignerNymID,
                                      QString BylawName, QString ClauseName,
                                      QString SourceCode);
    QJsonValue smartContractAddVariable(QString Contract, QString SignerNymID,
                                        QString BylawName, QString VarName,
                                        QString VarAccess, QString VarType,
                                        QString VarValue);
    QJsonValue smartContractAddCallback(QString Contract, QString SignerNymID,
                                        QString BylawName, QString CallbackName,
                                        QString ClauseName);
    QJsonValue smartContractAddHook(QString Contract, QString SignerNymID,
                                    QString BylawName, QString HookName,
                                    QString ClauseName);
    QJsonValue smartContractAddParty(QString Contract, QString SignerNymID,
                                     QString PartyNymID, QString PartyName,
                                     QString AgentName);
    QJsonValue smartContractAddAccount(QString Contract, QString SignerNymID,
                                      QString PartyName, QString AccountName,
                                      QString InstrumentDefinitionID);
    QJsonValue smartContractRemoveBylaw(QString Contract, QString SignerNymID,
                                        QString BylawName);
    QJsonValue smartContractUpdateClause(QString Contract, QString SignerNymID,
                                         QString BylawName, QString ClauseName,
                                         QString SourceCode);
    QJsonValue smartContractRemoveClause(QString Contract, QString SignerNymID,
                                         QString BylawName, QString ClauseName);
    QJsonValue smartContractRemoveVariable(QString Contract, QString SignerNymID,
                                           QString BylawName, QString VarName);
    QJsonValue smartContractRemoveCallback(QString Contract, QString SignerNymID,
                                           QString BylawName, QString CallbackName);
    QJsonValue smartContractRemoveHook(QString Contract, QString SignerNymID,
                                       QString BylawName, QString HookName,
                                       QString ClauseName);
    QJsonValue smartContractRemoveParty(QString Contract, QString SignerNymID,
                                        QString PartyName);
    QJsonValue smartContractCountNumbersNeeded(QString Contract, QString AgentName);
    QJsonValue smartContractConfirmAccount(QString Contract, QString SignerNymID,
                                           QString PartyName, QString AccountName,
                                           QString AgentName, QString AccountID);
    QJsonValue smartContractConfirmParty(QString Contract, QString PartyName,
                                         QString NymID);
    QJsonValue smartAreAllPartiesConfirmed(QString Contract);
    QJsonValue smartIsPartyConfirmed(QString Contract, QString PartyName);
    QJsonValue smartGetPartyCount(QString Contract);
    QJsonValue smartGetBylawCount(QString Contract);
    QJsonValue smartGetPartyByIndex(QString Contract, int32_t Index);
    QJsonValue smartGetBylawByIndex(QString Contract, int32_t Index);
    QJsonValue bylawGetLanguage(QString Contract, QString BylawName);
    QJsonValue bylawGetClauseCount(QString Contract, QString BylawName);
    QJsonValue bylawGetVariableCount(QString Contract, QString BylawName);
    QJsonValue bylawGetHookCount(QString Contract, QString BylawName);
    QJsonValue bylawGetCallbackCount(QString Contract, QString BylawName);
    QJsonValue clauseGetNameByIndex(QString Contract, QString BylawName,
                                    int32_t Index);
    QJsonValue clauseGetContents(QString Contract, QString BylawName,
                                 QString ClauseName);
    QJsonValue variableGetNameByIndex(QString Contract, QString BylawName,
                                      int32_t Index);
    QJsonValue variableGetType(QString Contract, QString BylawName,
                               QString VariableName);
    QJsonValue variableGetAccess(QString Contract, QString BylawName,
                                 QString VariableName);
    QJsonValue variableGetContents(QString Contract, QString BylawName,
                                   QString VariableName);
    QJsonValue hookGetNameByIndex(QString Contract, QString BylawName,
                                  int32_t Index);
    QJsonValue hookGetClauseCount(QString Contract, QString BylawName,
                                  QString HookName);
    QJsonValue hookGetClauseAtIndex(QString Contract, QString BylawName,
                                    QString HookName, int32_t Index);
    QJsonValue callbackGetNameByIndex(QString Contract, QString BylawName,
                                      int32_t Index);
    QJsonValue callbackGetClause(QString Contract, QString BylawName,
                                 QString ClauseName);
    QJsonValue partyGetAccountCount(QString Contract, QString PartyName);
    QJsonValue partyGetAgentCount(QString Contract, QString PartyName);
    QJsonValue partyGetID(QString Contract, QString PartyName);
    QJsonValue partyGetAccountNameByIndex(QString Contract, QString PartyName,
                                          int32_t Index);
    QJsonValue partyGetAccountID(QString Contract, QString PartyName,
                                 QString AccountName);
    QJsonValue partyGetAccountInstrumentDefinitionID(QString Contract, QString PartyName,
                                                     QString AccountName);
    QJsonValue partyGetAccountAgentName(QString Contract, QString PartyName,
                                        QString AccountName);
    QJsonValue partyGetAgentNameByIndex(QString Contract, QString PartyName,
                                        int32_t Index);
    QJsonValue partyGetAgentID(QString Contract, QString PartyName,
                               QString AgentName);
    QJsonValue activateSmartContract(QString NotaryID, QString NymID,
                                     QString SmartContract);
    QJsonValue triggerClause(QString NotaryID, QString NymID,
                             int64_t TransactionNumber, QString ClauseName,
                             QString Parameter);
    QJsonValue messageHarvestTransactionNumbers(QString Message, QString NymID,
                                                bool HarvestingForRetry, bool ReplyWasSuccess,
                                                bool ReplyWasFailure, bool TransactionWasSuccess,
                                                bool TransactionWasFailure);































    // Moneychanger::It() methods
    QString mcSendDialog(QString Account, QString Recipient,
                         QString Asset, QString Amount);
    QString mcRequestFundsDialog(QString Account, QString Recipient,
                                 QString Asset, QString Amount);

    bool mcActivateSmartContract(); // Init Wizard
    QJsonValue mcListSmartContracts();


};

#endif // MCRPCSERVICE_H
