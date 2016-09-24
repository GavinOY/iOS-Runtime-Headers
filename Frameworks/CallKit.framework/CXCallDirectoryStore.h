/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryStore : NSObject {
    CXDatabase * _database;
    BOOL  _temporary;
}

@property (nonatomic, retain) CXDatabase *database;
@property (nonatomic, readonly) int schemaVersion;
@property (getter=isTemporary, nonatomic) BOOL temporary;
@property (nonatomic, readonly) NSURL *url;

+ (id)databaseTemplateURL;
+ (id)databaseURLUsingTemporaryDirectory:(BOOL)arg1 error:(id*)arg2;
+ (BOOL)initializeDatabaseIfNecessaryWithURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (BOOL)_containsBlockingEntryWithSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (int)_findOrCreateIDForPhoneNumber:(int)arg1 error:(id*)arg2;
- (id)_firstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (id)_firstIdentificationEntryForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (id)_identificationEntriesForSQL:(id)arg1 bindings:(id)arg2 error:(id*)arg3;
- (BOOL)_parseFirstIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(id /* block */)arg3 error:(id*)arg4;
- (BOOL)_parseIdentificationEntriesForSQL:(id)arg1 bindings:(id)arg2 handler:(id /* block */)arg3 error:(id*)arg4;
- (BOOL)_removeUnreferencedLabelsWithError:(id*)arg1;
- (BOOL)_removeUnreferencedPhoneNumbersWithError:(id*)arg1;
- (id)_sqlBindingsForPrioritizedExtensionIdentifiers:(id)arg1 withPriorityOffset:(int)arg2;
- (id)_sqlCaseMappingPlaceholderStringWithKeyColumnName:(id)arg1 defaultValue:(id)arg2 numberOfPairs:(unsigned int)arg3;
- (id)_sqlStringListPlaceholderStringWithNumberOfEntries:(int)arg1;
- (id)_sqlValuesListPlaceholderStringWithNumberOfEntries:(int)arg1 entryString:(id)arg2;
- (id)_storeIdentificationEntryWithExtensionBundleID:(id)arg1 localizedLabel:(id)arg2;
- (BOOL)addBlockingEntriesWithData:(id)arg1 extensionID:(int)arg2 error:(id*)arg3;
- (BOOL)addBlockingEntryWithPhoneNumber:(int)arg1 extensionID:(int)arg2 error:(id*)arg3;
- (int)addExtensionWithIdentifier:(id)arg1 error:(id*)arg2;
- (int)addExtensionWithIdentifier:(id)arg1 priority:(int)arg2 error:(id*)arg3;
- (BOOL)addIdentificationEntriesWithData:(id)arg1 extensionID:(int)arg2 error:(id*)arg3;
- (BOOL)addIdentificationEntryWithPhoneNumber:(int)arg1 labelID:(int)arg2 extensionID:(int)arg3 error:(id*)arg4;
- (int)addLabel:(id)arg1 error:(id*)arg2;
- (BOOL)containsBlockingEntryWithPhoneNumber:(id)arg1 error:(id*)arg2;
- (BOOL)containsBlockingEntryWithPhoneNumberInArray:(id)arg1 error:(id*)arg2;
- (BOOL)containsExtensionWithIdentifier:(id)arg1 priority:(int*)arg2 error:(id*)arg3;
- (id)database;
- (void)dealloc;
- (id)description;
- (id)firstIdentificationEntriesForPhoneNumbers:(id)arg1 error:(id*)arg2;
- (id)firstIdentificationEntryForPhoneNumber:(id)arg1 error:(id*)arg2;
- (int)idForLabel:(id)arg1 error:(id*)arg2;
- (int)idForPhoneNumber:(int)arg1 error:(id*)arg2;
- (id)identificationEntriesForPhoneNumber:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initForReadingAndWritingWithError:(id*)arg1;
- (id)initForReadingWithError:(id*)arg1;
- (id)initReadOnly:(BOOL)arg1 temporary:(BOOL)arg2 error:(id*)arg3;
- (BOOL)isTemporary;
- (BOOL)performTransactionWithBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)prioritizedExtensionIdentifiersWithError:(id*)arg1;
- (BOOL)removeExtensionWithIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)removeUnreferencedRecordsWithError:(id*)arg1;
- (int)schemaVersion;
- (void)setDatabase:(id)arg1;
- (BOOL)setPrioritizedExtensionIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setTemporary:(BOOL)arg1;
- (id)url;
- (BOOL)vacuumWithError:(id*)arg1;

@end