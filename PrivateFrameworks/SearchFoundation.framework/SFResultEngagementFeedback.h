/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying> {
    bool  _actionEngaged;
    unsigned long long  _actionTarget;
    unsigned long long  _destination;
    bool  _matchesUnengagedSuggestion;
    unsigned long long  _triggerEvent;
}

@property (nonatomic, readonly) bool actionEngaged;
@property (nonatomic) unsigned long long actionTarget;
@property (nonatomic) unsigned long long destination;
@property (nonatomic) bool matchesUnengagedSuggestion;
@property (nonatomic) unsigned long long triggerEvent;

+ (bool)supportsSecureCoding;

- (bool)actionEngaged;
- (unsigned long long)actionTarget;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 actionEngaged:(bool)arg2 triggerEvent:(unsigned long long)arg3 destination:(unsigned long long)arg4;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3;
- (id)initWithResult:(id)arg1 triggerEvent:(unsigned long long)arg2 destination:(unsigned long long)arg3 actionTarget:(unsigned long long)arg4;
- (bool)matchesUnengagedSuggestion;
- (void)setActionTarget:(unsigned long long)arg1;
- (void)setDestination:(unsigned long long)arg1;
- (void)setMatchesUnengagedSuggestion:(bool)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

@end
