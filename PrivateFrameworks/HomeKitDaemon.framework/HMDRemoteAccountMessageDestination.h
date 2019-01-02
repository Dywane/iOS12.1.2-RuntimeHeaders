/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteAccountMessageDestination : HMDRemoteAccountHandleMessageDestination {
    HMDAccount * _account;
}

@property (nonatomic, readonly) HMDAccount *account;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)account;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(bool)arg3;
- (id)initWithTarget:(id)arg1 handle:(id)arg2 multicast:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (id)remoteDestinationString;
- (id)shortDescription;

@end
