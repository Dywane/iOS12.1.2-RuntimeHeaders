/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSDevice : NSObject

+ (id)MLBSerialNumber;
+ (id)_appleLanguagesObservable;
+ (id)_compatibleProductType;
+ (id)_dataForNVRAMKey:(id)arg1;
+ (id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5;
+ (id)_notificationIdFromFollowUpId:(id)arg1 account:(id)arg2;
+ (void)_performAuth;
+ (void)_startListeningForDeviceLanguageChangeWithBagContract:(id)arg1 callback:(id /* block */)arg2;
+ (id)_systemVersionDictionary;
+ (id)buildVersion;
+ (id)deviceGUID;
+ (bool)deviceIsAppleTV;
+ (bool)deviceIsAppleWatch;
+ (bool)deviceIsAudioAccessory;
+ (bool)deviceIsInternalBuild;
+ (bool)deviceIsSeedBuild;
+ (bool)deviceIsiPad;
+ (bool)deviceIsiPhone;
+ (bool)deviceIsiPod;
+ (id)deviceName;
+ (id)deviceOffers;
+ (bool)deviceOffersContainProductType:(unsigned long long)arg1;
+ (bool)deviceOffersContainType:(unsigned long long)arg1;
+ (id)deviceOffersForProductType:(unsigned long long)arg1;
+ (id)deviceOffersForType:(unsigned long long)arg1;
+ (bool)expressedIntent;
+ (id)hardwarePlatform;
+ (bool)isEligibleForOffers;
+ (bool)isGift;
+ (bool)isRunningInStoreDemoMode;
+ (id)language;
+ (id)localIPAddress;
+ (id)macAddress;
+ (id)macAddressData;
+ (bool)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4;
+ (bool)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 logKey:(id)arg3;
+ (bool)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5;
+ (bool)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 logKey:(id)arg4;
+ (id)productType;
+ (id)productVersion;
+ (void)registerCompanionWithSerialNumber:(id)arg1;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bagContract:(id)arg3 logKey:(id)arg4;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3;
+ (bool)saveDeviceOffersForAccount:(id)arg1 response:(id)arg2 logKey:(id)arg3;
+ (id)screenScale;
+ (id)serialNumber;
+ (void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg1;
+ (bool)shouldPresentSetupOffersForAccount:(id)arg1;
+ (void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg1;
+ (void)stopListeningForDeviceLanguageChange;
+ (bool)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg1 logKey:(id)arg2;
+ (bool)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3;
+ (id)thinnedAppVariantId;
+ (id)uniqueDeviceId;

@end
