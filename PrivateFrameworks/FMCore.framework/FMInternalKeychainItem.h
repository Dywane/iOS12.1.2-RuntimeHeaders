/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMInternalKeychainItem : NSObject <FMKeychainItem> {
    NSDate * _creationDate;
    NSDate * _lastModifyDate;
    NSString * _password;
    NSData * _rawData;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastModifyDate;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSData *rawData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)creationDate;
- (id)initWithResults:(id)arg1;
- (id)lastModifyDate;
- (id)password;
- (id)rawData;
- (void)setCreationDate:(id)arg1;
- (void)setLastModifyDate:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRawData:(id)arg1;

@end
