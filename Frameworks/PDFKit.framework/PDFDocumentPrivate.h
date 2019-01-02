/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFDocumentPrivate : NSObject {
    PDFAKDocumentAdaptor * akDocumentAdaptor;
    bool  allowsCommenting;
    bool  allowsContentAccessibility;
    bool  allowsCopying;
    bool  allowsDocumentAssembly;
    bool  allowsDocumentChanges;
    bool  allowsFormFieldEntry;
    bool  allowsPrinting;
    NSDictionary * attributes;
    NSMutableIndexSet * bookmarkedPages;
    struct __DDScanner { } * dataDetector;
    NSOperationQueue * dataDetectorQueue;
    id  delegate;
    struct CGPDFDocument { } * document;
    NSArray * documentCatalogMetadata;
    bool  documentChanged;
    bool  documentHasBurnInAnnotations;
    NSURL * documentURL;
    long long  findCharIndex;
    PDFSelection * findInstance;
    int  findModel;
    unsigned long long  findOptions;
    long long  findPageIndex;
    NSMutableArray * findResults;
    NSArray * findStrings;
    bool  finding;
    PDFForm * formData;
    bool  formDataLoaded;
    NSIndexSet * initialBookmarkedPageIndices;
    bool  isEncrypted;
    bool  isUnlocked;
    long long  lastFindCharIndex;
    long long  lastFindPageIndex;
    bool  limitedSearch;
    int  majorVersion;
    int  minorVersion;
    PDFOutline * outline;
    <PDFDocumentPageChangeDelegate> * pageChangeDelegate;
    unsigned long long  pageCount;
    NSMutableDictionary * pageDictionaryIndices;
    NSMutableDictionary * pageIndices;
    NSOperationQueue * pageLayoutThreadQueue;
    NSMutableArray * pages;
    bool  pagesChanged;
    NSString * password;
    <PDFAKControllerDelegateProtocol> * pdfAKControllerDelegateForDeferredSetup;
    long long  permission;
    PDFRenderingProperties * renderingProperties;
    bool  respondsToClassForAnnotationClass;
    bool  respondsToClassForAnnotationType;
    bool  respondsToClassForPage;
    bool  respondsToDidBeginDocumentFind;
    bool  respondsToDidBeginPageFind;
    bool  respondsToDidEndDocumentFind;
    bool  respondsToDidEndPageFind;
    bool  respondsToDidFindMatch;
    bool  respondsToDidMatchString;
    bool  respondsToDidUnlock;
    bool  respondsToPrintJobTitle;
    bool  subclassOverridesPageAtIndex;
    bool  useTaggedPDF;
    NSString * xmpNameSpace;
    NSString * xmpPrefix;
    NSString * xmpRootPath;
}

- (void).cxx_destruct;

@end
