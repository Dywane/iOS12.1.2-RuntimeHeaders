/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIRevisionHistory : NSObject {
    struct _TIRevisionHistoryTokenIterator { 
        unsigned long long tokenIndex; 
        unsigned long long documentLocation; 
    }  _currentTokenIterator;
    <TIRevisionHistoryDelegate> * _delegate;
    NSString * _documentText;
    TIRevisionHistoryToken * _lastRejectedToken;
    TILRUDictionary * _recentAutocorrections;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRange;
    bool  _shouldReportRevisionToDP;
    NSMutableArray * _tokenization;
    void * _tokenizer;
}

@property (nonatomic) struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; } currentTokenIterator;
@property (nonatomic) <TIRevisionHistoryDelegate> *delegate;
@property (nonatomic, copy) NSString *documentText;
@property (nonatomic, retain) TIRevisionHistoryToken *lastRejectedToken;
@property (nonatomic, retain) TILRUDictionary *recentAutocorrections;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (nonatomic) bool shouldReportRevisionToDP;
@property (nonatomic, readonly) NSMutableArray *tokenization;
@property (nonatomic, readonly) void*tokenizer;

- (void).cxx_destruct;
- (void)acceptCurrentSentence;
- (void)acceptText:(id)arg1 isAutoshifted:(bool)arg2;
- (void)acceptToken:(id)arg1 withContext:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long long)arg3 saveToDifferentialPrivacy:(int)arg4;
- (void)acceptTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)addRevisedTokenString:(id)arg1 withTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 inDocumentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 toRevision:(id)arg4;
- (void)adjustTokenOffsetAfterDeletedTokenRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withDeletedCharacterCount:(unsigned long long)arg2;
- (void)annotateTokensCreatedFromDocumentState;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })currentTokenIterator;
- (id)currentUserTyping;
- (id)currentWord;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (bool)deletingBackwardEqualsDocumentState:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })documentRangeOfTokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (id)documentState;
- (id)documentText;
- (void)enumerateSentenceStemUsingBlock:(id /* block */)arg1;
- (void)enumerateSentenceStemUsingIteratorBlock:(id /* block */)arg1;
- (unsigned long long)fillTokenBuffer:(struct TITokenID { unsigned int x1; unsigned int x2; }*)arg1 withContextForTokenAtIndex:(unsigned long long)arg2;
- (void)handleRevisedTokenString:(id)arg1 withTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 forRevision:(id)arg3;
- (id)init;
- (id)initWithLocale:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })inputRangeForReplacement:(id)arg1;
- (void)insertText:(id)arg1;
- (bool)isSelectionContainedByToken:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isWordToken:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })iteratorUpperBoundForSelectionStart;
- (id)lastRejectedToken;
- (bool)matchesContextAfterSelection:(id)arg1;
- (bool)matchesContextBeforeSelection:(id)arg1;
- (bool)matchesDocumentState:(id)arg1;
- (bool)matchesSelectedText:(id)arg1;
- (void)mergeTokenizationsForRevision:(id)arg1;
- (void)migrateUserTypingFromDeletedTokens:(id)arg1 toInsertedTokens:(id)arg2 withUsageLearningMask:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })nextTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (id)nonEmptyTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)originalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1 matchesRevisedDocumentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 andTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg3;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })popSelectedTextFromTokenizer;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })previousTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (void)pushSelectedTextToTokenizerForRevision:(id)arg1;
- (id)recentAutocorrections;
- (void)rejectCandidate:(id)arg1 forInput:(id)arg2;
- (void)rejectToken:(id)arg1 withContext:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg2 contextLength:(unsigned long long)arg3 negativeLearningHint:(int)arg4 withRevisedToken:(id)arg5;
- (void)rejectTokensInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 negativeLearningHint:(int)arg2 newRevision:(id)arg3;
- (void)replaceSelectionWithText:(id)arg1 negativeLearningHint:(int)arg2 selectedTokenReplacementHandler:(id /* block */)arg3;
- (void)resetToDocumentState:(id)arg1;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })resetTokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fromDocumentLocation:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedTokenRangeWithIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setCurrentTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentText:(id)arg1;
- (void)setLastRejectedToken:(id)arg1;
- (void)setRecentAutocorrections:(id)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setShouldReportRevisionToDP:(bool)arg1;
- (bool)shouldReportRevisionToDP;
- (bool)shouldValidateOriginalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1 withRevisedDocumentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forRevision:(id)arg3;
- (void)syncToDocumentState:(id)arg1;
- (id)tokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tokenization;
- (unsigned long long)tokenizeDocumentTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTokenHandler:(id /* block */)arg2;
- (void*)tokenizer;
- (bool)validateTokenizationForRevisedDocumentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 andTokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 forRevision:(id)arg3;
- (id)wordTokenContainingSelection;

@end
