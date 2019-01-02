/* Generated by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKIdentifierLookupTable : NSObject {
    NSMapTable * _identifierMapTable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lookupTableSpinLock;
}

- (void).cxx_destruct;
- (void)_insertCode:(long long)arg1 forIdentifier:(id)arg2;
- (bool)codeForIdentifier:(id)arg1 code:(long long*)arg2;
- (void)enumerateCodesWithBlock:(id /* block */)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setCode:(long long)arg1 forIdentifier:(id)arg2;

@end
