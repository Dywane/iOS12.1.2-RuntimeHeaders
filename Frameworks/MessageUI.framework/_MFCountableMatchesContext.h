/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFCountableMatchesContext : NSObject {
    long long  _maxCount;
    struct __CFDictionary { } * _peopleCount;
    NSMutableSet * _popularPeople;
}

@property (nonatomic) long long maxCount;

- (void)countInstances:(id)arg1 usingPredicate:(id /* block */)arg2;
- (void)dealloc;
- (id)highestMatches;
- (id)init;
- (long long)maxCount;
- (void)setMaxCount:(long long)arg1;

@end
