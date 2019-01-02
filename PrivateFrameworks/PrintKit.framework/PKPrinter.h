/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKPrinter : NSObject <NSSecureCoding> {
    long long  _jobAccountIDSupport;
    NSArray * _jpegFeaturesSupported;
    PKPaperList * _paperList;
    NSArray * _trays;
    long long  accessState;
    long long  btleMeasuredPower;
    NSUUID * btleUUID;
    bool  connectionShouldNotBeTrusted;
    bool  hasIdentifyPrinterOp;
    long long  identifyActionsSupported;
    bool  isFromMCProfile;
    bool  isLocal;
    struct _http_s { int x1; int x2; int x3; long long x4; int x5; int x6; int x7; int x8; struct sockaddr_in { unsigned char x_9_1_1; unsigned char x_9_1_2; unsigned short x_9_1_3; struct in_addr { unsigned int x_4_2_1; } x_9_1_4; BOOL x_9_1_5[8]; } x9; BOOL x10[256]; BOOL x11[27][256]; char *x12; int x13; int x14; int x15; BOOL x16[2048]; int x17; unsigned char x18[88]; BOOL x19[256]; unsigned int x20; struct SSLContext {} *x21; int x22; struct fd_set {} *x23; int x24; char *x25; BOOL x26[256]; BOOL x27[256]; int x28; long long x29; union { /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_30_1_1; void*x_30_1_2; void*x_30_1_3; void*x_30_1_4; void*x_30_1_5; void*x_30_1_6; void*x_30_1_7; double x_30_1_8; double x_30_1_9; const void*x_30_1_10; void*x_30_1_11; } *x30; struct http_addrlist_s {} *x31; BOOL x32[2048]; int x33; char *x34; char *x35; struct __CFArray {} *x36; int (*x37)(); void *x38; double x39; int x40; int x41; int x42; char *x43; char *x44; char *x45; char *x46; char *x47; char *x48; int x49; struct z_stream_s { char *x_50_1_1; unsigned int x_50_1_2; unsigned long long x_50_1_3; char *x_50_1_4; unsigned int x_50_1_5; unsigned long long x_50_1_6; char *x_50_1_7; struct internal_state {} *x_50_1_8; int (*x_50_1_9)(); int (*x_50_1_10)(); void *x_50_1_11; int x_50_1_12; unsigned long long x_50_1_13; unsigned long long x_50_1_14; } x50; } * job_http;
    long long  kind;
    NSArray * mandatoryJobAttributes;
    int  maxCopies;
    int  maxDocumentPasswordLength;
    int  maxJPEGKBytes;
    int  maxJPEGXDimension;
    int  maxJPEGYDimension;
    int  maxPDFKBytes;
    NSString * name;
    int  preferred_landscape;
    NSDictionary * printInfoSupported;
    NSArray * printScalingSupported;
    int  printerStateReasons;
    NSMutableDictionary * privateData;
    long long  proximity;
    NSString * quotaManagementURL;
    int  recentRssiValues;
    NSMutableDictionary * specialFeedOrientation;
    long long  type;
}

@property (retain) NSDictionary *TXTRecord;
@property long long accessState;
@property (readonly) long long accessState;
@property long long btleMeasuredPower;
@property (retain) NSUUID *btleUUID;
@property (readonly) bool hasIdentifyPrinterOp;
@property (readonly) bool hasPrintInfoSupported;
@property (retain) NSString *hostname;
@property (readonly) long long identifyActionsSupported;
@property (readonly) bool isAdobeRGBSupported;
@property bool isFromMCProfile;
@property (readonly) bool isIPPS;
@property bool isLocal;
@property long long jobAccountIDSupport;
@property (readonly) long long jobTypesSupported;
@property (retain) NSArray *jpegFeaturesSupported;
@property (readonly) long long kind;
@property (readonly) NSArray *localizedNamesOfEmptyTrays;
@property (retain) NSString *name;
@property (readonly) bool needsSetup;
@property (retain) PKPaperList *paperList;
@property (retain) NSNumber *port;
@property (readonly) NSDictionary *printInfoSupported;
@property (readonly) NSURL *printerURL;
@property long long proximity;
@property (readonly, retain) NSString *scheme;
@property (readonly) bool setupSupportsPasswordScope;
@property (retain) NSArray *trays;
@property (readonly) long long type;
@property (readonly) NSString *uuid;

+ (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)getAttributes:(const char **)arg1 count:(int)arg2 fromURI:(id)arg3;
+ (id)hardcodedURIs;
+ (bool)ippsIsRequired;
+ (void)listenForPrinterNotifications;
+ (bool)mcProfilePrintersOnlyAllowed;
+ (id)nameForHardcodedURI:(id)arg1;
+ (bool)printerLookupWithName:(id)arg1 andTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1;
+ (id)printerWithName:(id)arg1 discoveryTimeout:(double)arg2;
+ (id)requiredPDL;
+ (bool)supportsSecureCoding;
+ (bool)urfIsOptional;
+ (bool)uriMatchesMCProfileAdded:(id)arg1;

- (id)TXTRecord;
- (id)TXTRecordWithTimeout:(int)arg1;
- (long long)abortJob;
- (long long)accessState;
- (void)addRSSIValue:(id)arg1;
- (void)aggdAppsAndPrinters;
- (id)availableRollPapersPreferBorderless:(bool)arg1;
- (long long)btleMeasuredPower;
- (id)btleUUID;
- (void)cancelUnlock;
- (void)checkOperations:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)doMedia2:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)feedOrientation:(id)arg1;
- (long long)finalizeJob:(int)arg1;
- (long long)finishJob;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)getAttributes:(const char **)arg1 count:(int)arg2;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)getPrinterAttributes;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)getSupplyLevelAttributes;
- (void)getSupplyLevels:(id /* block */)arg1;
- (void)handlePrinterStateReasonsFromResponse:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (bool)hasIdentifyPrinterOp;
- (bool)hasPrintInfoSupported;
- (id)hostname;
- (long long)identifyActionsSupported;
- (void)identifySelf;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
- (bool)isAdobeRGBSupported;
- (bool)isBonjour;
- (bool)isEqual:(id)arg1;
- (bool)isFromMCProfile;
- (bool)isIPPS;
- (bool)isLocal;
- (bool)isPaperReady:(id)arg1;
- (long long)jobAccountIDSupport;
- (long long)jobTypesSupported;
- (id)jpegFeaturesSupported;
- (long long)kind;
- (bool)knowsReadyPaperList;
- (id)localName;
- (id)localizedNamesOfEmptyTrays;
- (id)localizedPrinterWarnings;
- (id)location;
- (struct http_addrlist_s { struct http_addrlist_s {} *x1; union _http_addr_u { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_2_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_2_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_2_1_3; struct sockaddr_un { unsigned char x_4_2_1; unsigned char x_4_2_2; BOOL x_4_2_3[104]; } x_2_1_4; BOOL x_2_1_5[256]; } x2; }*)lookup;
- (id)makeAndModel;
- (id)matchedPaper:(id)arg1 preferBorderless:(bool)arg2 withDuplexMode:(id)arg3 didMatch:(bool*)arg4;
- (id)name;
- (bool)needsSetup;
- (id)paperList;
- (id)paperListForDuplexMode:(id)arg1;
- (id)papersForDocumentWithSize:(struct CGSize { double x1; double x2; })arg1 andDuplex:(bool)arg2;
- (id)papersForDocumentWithSize:(struct CGSize { double x1; double x2; })arg1 scaleUpOnRoll:(bool)arg2 andDuplex:(bool)arg3;
- (id)papersForPhotoWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)port;
- (id)printInfoSupported;
- (long long)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3;
- (id)printerURL;
- (id)privateObjectForKey:(id)arg1;
- (long long)proximity;
- (void)reconfirmWithForce:(bool)arg1;
- (void)removeCredentialsFromKeychain;
- (bool)resolve;
- (bool)resolveIfNeeded;
- (bool)resolveWithTimeout:(int)arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize { double x1; double x2; })arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize { double x1; double x2; })arg1 forPhoto:(bool)arg2;
- (id)scheme;
- (long long)sendData:(const char *)arg1 ofLength:(long long)arg2;
- (void)setAccessState:(long long)arg1;
- (void)setAccessStateFromTXT;
- (void)setBtleMeasuredPower:(long long)arg1;
- (void)setBtleUUID:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setIsFromMCProfile:(bool)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setJobAccountIDSupport:(long long)arg1;
- (void)setJpegFeaturesSupported:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPaperList:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (void)setProximity:(long long)arg1;
- (void)setTXTRecord:(id)arg1;
- (void)setTrays:(id)arg1;
- (bool)setupSupportsPasswordScope;
- (void)setupWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showPassCodeForSetupWithCompletionHandler:(id /* block */)arg1;
- (long long)startJob:(id)arg1 ofType:(id)arg2;
- (bool)supportsJobAccountID;
- (id)trays;
- (id)txtRecordObjectForKey:(id)arg1;
- (long long)type;
- (void)unlockWithCompletionHandler:(id /* block */)arg1;
- (void)updateType;
- (id)uuid;
- (void)validatePassCode:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
