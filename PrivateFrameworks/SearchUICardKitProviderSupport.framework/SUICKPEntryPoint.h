/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

@interface SUICKPEntryPoint : NSObject <CRKIdentifiedProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (readonly) Class superclass;

- (id)cardViewControllerForCard:(id)arg1;
- (id)init;
- (id)providerIdentifier;
- (void)requestCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;

@end
