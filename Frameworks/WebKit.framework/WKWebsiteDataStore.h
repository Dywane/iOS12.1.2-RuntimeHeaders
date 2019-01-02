/* Generated by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebsiteDataStore : NSObject <NSSecureCoding, WKObject> {
    struct ObjectStorage<API::WebsiteDataStore> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _websiteDataStore;
}

@property (setter=_setAllowsCellularAccess:, nonatomic) bool _allowsCellularAccess;
@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (setter=_setBoundInterfaceIdentifier:, nonatomic) NSString *_boundInterfaceIdentifier;
@property (setter=_setCacheStorageDirectory:, nonatomic) NSString *_cacheStorageDirectory;
@property (setter=_setCacheStoragePerOriginQuota:, nonatomic) unsigned long long _cacheStoragePerOriginQuota;
@property (setter=_setProxyConfiguration:, nonatomic) NSDictionary *_proxyConfiguration;
@property (setter=_setResourceLoadStatisticsDebugMode:, nonatomic) bool _resourceLoadStatisticsDebugMode;
@property (setter=_setResourceLoadStatisticsEnabled:, nonatomic) bool _resourceLoadStatisticsEnabled;
@property (setter=_setServiceWorkerRegistrationDirectory:, nonatomic) NSString *_serviceWorkerRegistrationDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKHTTPCookieStore *httpCookieStore;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_allWebsiteDataTypesIncludingPrivate;
+ (void)_allowWebsiteDataRecordsForAllOrigins;
+ (bool)_defaultDataStoreExists;
+ (void)_deleteDefaultDataStoreForTesting;
+ (id)allWebsiteDataTypes;
+ (id)defaultDataStore;
+ (id)nonPersistentDataStore;
+ (bool)supportsSecureCoding;

- (bool)_allowsCellularAccess;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)_boundInterfaceIdentifier;
- (id)_cacheStorageDirectory;
- (unsigned long long)_cacheStoragePerOriginQuota;
- (void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_getAllStorageAccessEntriesFor:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_hasRegisteredServiceWorker;
- (id)_initWithConfiguration:(id)arg1;
- (id)_proxyConfiguration;
- (bool)_resourceLoadStatisticsDebugMode;
- (bool)_resourceLoadStatisticsEnabled;
- (void)_resourceLoadStatisticsSetShouldSubmitTelemetry:(bool)arg1;
- (id)_serviceWorkerRegistrationDirectory;
- (void)_setAllowsCellularAccess:(bool)arg1;
- (void)_setBoundInterfaceIdentifier:(id)arg1;
- (void)_setCacheStorageDirectory:(id)arg1;
- (void)_setCacheStoragePerOriginQuota:(unsigned long long)arg1;
- (void)_setProxyConfiguration:(id)arg1;
- (void)_setResourceLoadStatisticsDebugMode:(bool)arg1;
- (void)_setResourceLoadStatisticsEnabled:(bool)arg1;
- (void)_setResourceLoadStatisticsTestingCallback:(id /* block */)arg1;
- (void)_setServiceWorkerRegistrationDirectory:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)httpCookieStore;
- (id)initWithCoder:(id)arg1;
- (bool)isPersistent;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_allDataTypes;
+ (void)safari_clearHSTSSuperCookies;

@end
