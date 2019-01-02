/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSuggestionsDataSourceContext : NSObject {
    long long  _fetchLimit;
    unsigned long long  _matchingStrategy;
    PHSuggestionMessageContext * _messageContext;
    bool  _shouldShowAccepted;
    unsigned char  _type;
}

@property (nonatomic) long long fetchLimit;
@property (nonatomic) unsigned long long matchingStrategy;
@property (nonatomic, retain) PHSuggestionMessageContext *messageContext;
@property (nonatomic) bool shouldShowAccepted;
@property (nonatomic, readonly) unsigned char type;

- (void).cxx_destruct;
- (id)description;
- (long long)fetchLimit;
- (id)initWithType:(unsigned char)arg1;
- (unsigned long long)matchingStrategy;
- (id)messageContext;
- (void)setFetchLimit:(long long)arg1;
- (void)setMatchingStrategy:(unsigned long long)arg1;
- (void)setMessageContext:(id)arg1;
- (void)setShouldShowAccepted:(bool)arg1;
- (bool)shouldShowAccepted;
- (bool)supportsMatching;
- (unsigned char)type;

@end
