/* Generated by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPXIndexState : NSObject {
    NSData * _lastChangeToken;
    NSData * _lastPage;
}

@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) NSData *lastChangeToken;
@property (nonatomic, readonly) NSData *lastPage;
@property (nonatomic, readonly) unsigned long long phase;

+ (id)stateWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)description;
- (id)init;
- (id)initWithChangeToken:(id)arg1;
- (id)initWithPage:(id)arg1 changeToken:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)lastChangeToken;
- (id)lastPage;
- (unsigned long long)phase;

@end
