/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMultiPutTask : CoreDAVTask {
    NSString * _appSpecificDataProp;
    NSString * _appSpecificNamespace;
    NSString * _checkCTag;
    NSMutableDictionary * _hrefToETag;
    NSMutableDictionary * _hrefToErrorItems;
    NSMutableDictionary * _hrefToStatus;
    NSString * _nextCTag;
    CoreDAVXMLData * _pushedData;
    NSMutableDictionary * _uuidToErrorItems;
    NSMutableDictionary * _uuidToHREF;
    NSMutableDictionary * _uuidToStatus;
    bool  _validCTag;
}

@property (nonatomic, readonly) NSDictionary *hrefToETag;
@property (nonatomic, readonly) NSDictionary *hrefToErrorItems;
@property (nonatomic, readonly) NSDictionary *hrefToStatus;
@property (nonatomic, readonly) NSString *nextCTag;
@property (nonatomic, readonly) NSDictionary *uuidToErrorItems;
@property (nonatomic, readonly) NSDictionary *uuidToHREF;
@property (nonatomic, readonly) NSDictionary *uuidToStatus;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)hrefToETag;
- (id)hrefToErrorItems;
- (id)hrefToStatus;
- (id)httpMethod;
- (id)initWithURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4;
- (id)nextCTag;
- (id)requestBody;
- (id)uuidToErrorItems;
- (id)uuidToHREF;
- (id)uuidToStatus;

@end
