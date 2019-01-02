/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CHMigrationPolicy : NSEntityMigrationPolicy {
    NSString * currentLocale;
    NSString * lastQueriedISOCountryCode;
    NSMutableDictionary * mccToISOCountryCodeMap;
}

- (void).cxx_destruct;
- (id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2;
- (id)init;
- (id)isoCountryCodeForMCC:(id)arg1;
- (id)isoCountryCodeIfAbsent:(id)arg1;

@end
