/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSuggestedContactStore : CNContactStore {
    <SGSuggestionsServiceContactsProtocol> * _suggestionService;
}

@property (nonatomic, retain) <SGSuggestionsServiceContactsProtocol> *suggestionService;

+ (void)initialize;
+ (bool)isSuggestionsSupported;
+ (id)storeIdentifier;
+ (id)storeInfoClasses;

- (void).cxx_destruct;
- (bool)_processSuggestions:(id)arg1 error:(id*)arg2 withBlock:(id /* block */)arg3;
- (bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithSuggestionsService:(id)arg1;
- (id)originForSuggestion:(id)arg1 error:(id*)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
- (void)setSuggestionService:(id)arg1;
- (id)suggestionService;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;

@end
