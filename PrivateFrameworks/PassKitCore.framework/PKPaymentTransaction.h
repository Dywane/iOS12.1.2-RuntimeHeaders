/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransaction : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    long long  _adjustmentType;
    NSString * _administrativeArea;
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    bool  _deviceScoreIdentifiersRequired;
    bool  _deviceScoreIdentifiersSubmitted;
    bool  _enRoute;
    NSString * _endStation;
    NSData * _endStationCode;
    double  _endStationLatitude;
    double  _endStationLongitude;
    NSDate * _expirationDate;
    PKPaymentTransactionFees * _fees;
    PKPaymentTransactionForeignExchangeInformation * _foreignExchangeInformation;
    bool  _hasAssociatedPaymentApplication;
    bool  _hasNotificationServiceData;
    NSString * _identifier;
    bool  _isCloudKitArchived;
    NSString * _locality;
    double  _locationAltitude;
    NSDate * _locationDate;
    double  _locationHorizontalAccuracy;
    double  _locationLatitude;
    double  _locationLongitude;
    double  _locationVerticalAccuracy;
    PKMerchant * _merchant;
    NSString * _merchantProvidedDescription;
    NSDictionary * _metadata;
    NSString * _paymentHash;
    NSString * _peerPaymentCounterpartHandle;
    NSString * _peerPaymentMemo;
    NSDate * _peerPaymentMessageReceivedDate;
    long long  _peerPaymentType;
    NSDecimalNumber * _primaryFundingSourceAmount;
    NSString * _primaryFundingSourceCurrencyCode;
    bool  _processedForLocation;
    bool  _processedForMerchantCleanup;
    bool  _processedForStations;
    NSUUID * _requestDeviceScoreIdentifier;
    NSDecimalNumber * _secondaryFundingSourceAmount;
    NSString * _secondaryFundingSourceCurrencyCode;
    NSString * _secondaryFundingSourceDPANSuffix;
    NSString * _secondaryFundingSourceDescription;
    NSString * _secondaryFundingSourceFPANIdentifier;
    long long  _secondaryFundingSourceNetwork;
    NSUUID * _sendDeviceScoreIdentifier;
    NSString * _serviceIdentifier;
    bool  _shouldSuppressDate;
    NSString * _startStation;
    NSData * _startStationCode;
    double  _startStationLatitude;
    double  _startStationLongitude;
    NSString * _stationCodeProvider;
    NSDecimalNumber * _subtotalAmount;
    long long  _technologyType;
    NSDate * _transactionDate;
    long long  _transactionDeclinedReason;
    unsigned long long  _transactionSource;
    long long  _transactionStatus;
    NSDate * _transactionStatusChangedDate;
    long long  _transactionType;
    unsigned long long  _transitModifiers;
    long long  _transitType;
    unsigned long long  _updateReasons;
}

@property (nonatomic) long long adjustmentType;
@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly) PKCurrencyAmount *currencyAmount;
@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) bool deviceScoreIdentifiersRequired;
@property (nonatomic) bool deviceScoreIdentifiersSubmitted;
@property (nonatomic, readonly) NSString *displayLocation;
@property (nonatomic) bool enRoute;
@property (nonatomic, copy) NSString *endStation;
@property (nonatomic, copy) NSData *endStationCode;
@property (nonatomic) double endStationLatitude;
@property (nonatomic, retain) CLLocation *endStationLocation;
@property (nonatomic) double endStationLongitude;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) PKPaymentTransactionFees *fees;
@property (nonatomic, retain) PKPaymentTransactionForeignExchangeInformation *foreignExchangeInformation;
@property (nonatomic, readonly) NSString *formattedBalanceAdjustmentAmount;
@property (nonatomic, readonly) NSString *formattedBalanceAdjustmentSubtotalAmount;
@property (nonatomic) bool hasAssociatedPaymentApplication;
@property (nonatomic, readonly) bool hasBackingData;
@property (nonatomic) bool hasNotificationServiceData;
@property (nonatomic, readonly) bool hasTransactionSource;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isCloudKitArchived;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) double locationAltitude;
@property (nonatomic, retain) NSDate *locationDate;
@property (nonatomic) double locationHorizontalAccuracy;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) double locationVerticalAccuracy;
@property (nonatomic, retain) PKMerchant *merchant;
@property (nonatomic, copy) NSString *merchantProvidedDescription;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSString *paymentHash;
@property (nonatomic, copy) NSString *peerPaymentCounterpartHandle;
@property (nonatomic, copy) NSString *peerPaymentMemo;
@property (nonatomic, copy) NSDate *peerPaymentMessageReceivedDate;
@property (nonatomic) long long peerPaymentStatus;
@property (nonatomic) long long peerPaymentType;
@property (nonatomic, copy) NSDecimalNumber *primaryFundingSourceAmount;
@property (nonatomic, readonly) PKCurrencyAmount *primaryFundingSourceCurrencyAmount;
@property (nonatomic, copy) NSString *primaryFundingSourceCurrencyCode;
@property (nonatomic) bool processedForLocation;
@property (nonatomic) bool processedForMerchantCleanup;
@property (nonatomic) bool processedForStations;
@property (nonatomic, copy) NSUUID *requestDeviceScoreIdentifier;
@property (nonatomic, copy) NSDecimalNumber *secondaryFundingSourceAmount;
@property (nonatomic, readonly) PKCurrencyAmount *secondaryFundingSourceCurrencyAmount;
@property (nonatomic, copy) NSString *secondaryFundingSourceCurrencyCode;
@property (nonatomic, copy) NSString *secondaryFundingSourceDPANSuffix;
@property (nonatomic, copy) NSString *secondaryFundingSourceDescription;
@property (nonatomic, copy) NSString *secondaryFundingSourceFPANIdentifier;
@property (nonatomic) long long secondaryFundingSourceNetwork;
@property (nonatomic, copy) NSUUID *sendDeviceScoreIdentifier;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic) bool shouldSuppressDate;
@property (nonatomic, copy) NSString *startStation;
@property (nonatomic, copy) NSData *startStationCode;
@property (nonatomic) double startStationLatitude;
@property (nonatomic, retain) CLLocation *startStationLocation;
@property (nonatomic) double startStationLongitude;
@property (nonatomic, copy) NSString *stationCodeProvider;
@property (nonatomic, copy) NSDecimalNumber *subtotalAmount;
@property (nonatomic, readonly) PKCurrencyAmount *subtotalCurrencyAmount;
@property (nonatomic) long long technologyType;
@property (nonatomic, copy) NSDate *transactionDate;
@property (nonatomic) long long transactionDeclinedReason;
@property (nonatomic) unsigned long long transactionSource;
@property (nonatomic) long long transactionStatus;
@property (nonatomic, copy) NSDate *transactionStatusChangedDate;
@property (nonatomic) long long transactionType;
@property (nonatomic) unsigned long long transitModifiers;
@property (nonatomic) long long transitType;
@property (nonatomic, readonly) unsigned long long updateReasons;

+ (id)cloudStoreTransactionDeviceDataRecordTypeRecordNamePrefix;
+ (id)paymentTransactionFromSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1;
+ (id)paymentTransactionWithSource:(unsigned long long)arg1 dictionary:(id)arg2 hasNotificationServiceData:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_formatBalanceAdjustmentAmount:(id)arg1;
- (id)_transactionSourceString;
- (id)_transactionTypeString;
- (id)_transitSubtypeString;
- (void)addUpdateReasons:(unsigned long long)arg1;
- (long long)adjustmentType;
- (id)administrativeArea;
- (id)amount;
- (id)currencyAmount;
- (id)currencyCode;
- (id)description;
- (bool)deviceScoreIdentifiersRequired;
- (bool)deviceScoreIdentifiersSubmitted;
- (id)dictionaryRepresentation;
- (id)displayLocation;
- (bool)enRoute;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endStation;
- (id)endStationCode;
- (double)endStationLatitude;
- (id)endStationLocation;
- (double)endStationLongitude;
- (id)expirationDate;
- (id)fees;
- (id)foreignExchangeInformation;
- (id)formattedBalanceAdjustmentAmount;
- (id)formattedBalanceAdjustmentSubtotalAmount;
- (id)formattedTransitTransactionMessage:(bool)arg1;
- (bool)hasAssociatedPaymentApplication;
- (bool)hasBackingData;
- (bool)hasCloudArchivableDeviceData;
- (bool)hasNotificationServiceData;
- (bool)hasTransactionSource;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (bool)isCloudKitArchived;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentTransaction:(id)arg1;
- (unsigned long long)itemType;
- (id)locality;
- (id)location;
- (double)locationAltitude;
- (id)locationDate;
- (double)locationHorizontalAccuracy;
- (double)locationLatitude;
- (double)locationLongitude;
- (double)locationVerticalAccuracy;
- (id)merchant;
- (id)merchantProvidedDescription;
- (id)metadata;
- (id)paymentHash;
- (id)peerPaymentCounterpartHandle;
- (id)peerPaymentMemo;
- (id)peerPaymentMessageReceivedDate;
- (long long)peerPaymentStatus;
- (long long)peerPaymentType;
- (id)primaryFundingSourceAmount;
- (id)primaryFundingSourceCurrencyAmount;
- (id)primaryFundingSourceCurrencyCode;
- (bool)processedForLocation;
- (bool)processedForMerchantCleanup;
- (bool)processedForStations;
- (id)recordTypesAndNames;
- (id)requestDeviceScoreIdentifier;
- (id)secondaryFundingSourceAmount;
- (id)secondaryFundingSourceCurrencyAmount;
- (id)secondaryFundingSourceCurrencyCode;
- (id)secondaryFundingSourceDPANSuffix;
- (id)secondaryFundingSourceDescription;
- (id)secondaryFundingSourceFPANIdentifier;
- (long long)secondaryFundingSourceNetwork;
- (id)sendDeviceScoreIdentifier;
- (id)serviceIdentifier;
- (void)setAdjustmentType:(long long)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setDeviceScoreIdentifiersRequired:(bool)arg1;
- (void)setDeviceScoreIdentifiersSubmitted:(bool)arg1;
- (void)setEnRoute:(bool)arg1;
- (void)setEndStation:(id)arg1;
- (void)setEndStationCode:(id)arg1;
- (void)setEndStationLatitude:(double)arg1;
- (void)setEndStationLocation:(id)arg1;
- (void)setEndStationLongitude:(double)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFees:(id)arg1;
- (void)setForeignExchangeInformation:(id)arg1;
- (void)setHasAssociatedPaymentApplication:(bool)arg1;
- (void)setHasNotificationServiceData:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsCloudKitArchived:(bool)arg1;
- (void)setLocality:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationAltitude:(double)arg1;
- (void)setLocationDate:(id)arg1;
- (void)setLocationHorizontalAccuracy:(double)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setLocationVerticalAccuracy:(double)arg1;
- (void)setMerchant:(id)arg1;
- (void)setMerchantProvidedDescription:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPaymentHash:(id)arg1;
- (void)setPeerPaymentCounterpartHandle:(id)arg1;
- (void)setPeerPaymentMemo:(id)arg1;
- (void)setPeerPaymentMessageReceivedDate:(id)arg1;
- (void)setPeerPaymentStatus:(long long)arg1;
- (void)setPeerPaymentType:(long long)arg1;
- (void)setPrimaryFundingSourceAmount:(id)arg1;
- (void)setPrimaryFundingSourceCurrencyCode:(id)arg1;
- (void)setProcessedForLocation:(bool)arg1;
- (void)setProcessedForMerchantCleanup:(bool)arg1;
- (void)setProcessedForStations:(bool)arg1;
- (void)setRequestDeviceScoreIdentifier:(id)arg1;
- (void)setSecondaryFundingSourceAmount:(id)arg1;
- (void)setSecondaryFundingSourceCurrencyCode:(id)arg1;
- (void)setSecondaryFundingSourceDPANSuffix:(id)arg1;
- (void)setSecondaryFundingSourceDescription:(id)arg1;
- (void)setSecondaryFundingSourceFPANIdentifier:(id)arg1;
- (void)setSecondaryFundingSourceNetwork:(long long)arg1;
- (void)setSendDeviceScoreIdentifier:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setShouldSuppressDate:(bool)arg1;
- (void)setStartStation:(id)arg1;
- (void)setStartStationCode:(id)arg1;
- (void)setStartStationLatitude:(double)arg1;
- (void)setStartStationLocation:(id)arg1;
- (void)setStartStationLongitude:(double)arg1;
- (void)setStationCodeProvider:(id)arg1;
- (void)setSubtotalAmount:(id)arg1;
- (void)setTechnologyType:(long long)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionDeclinedReason:(long long)arg1;
- (void)setTransactionSource:(unsigned long long)arg1;
- (void)setTransactionStatus:(long long)arg1;
- (void)setTransactionStatusChangedDate:(id)arg1;
- (void)setTransactionType:(long long)arg1;
- (void)setTransitModifiers:(unsigned long long)arg1;
- (void)setTransitType:(long long)arg1;
- (bool)shouldSuppressDate;
- (id)startStation;
- (id)startStationCode;
- (double)startStationLatitude;
- (id)startStationLocation;
- (double)startStationLongitude;
- (id)stationCodeProvider;
- (id)subtotalAmount;
- (id)subtotalCurrencyAmount;
- (long long)technologyType;
- (id)transactionDate;
- (long long)transactionDeclinedReason;
- (unsigned long long)transactionSource;
- (long long)transactionStatus;
- (id)transactionStatusChangedDate;
- (long long)transactionType;
- (unsigned long long)transitModifiers;
- (long long)transitType;
- (unsigned long long)updateReasons;
- (id)updateReasonsDescription;

@end
