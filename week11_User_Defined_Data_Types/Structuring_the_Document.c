#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct word {
    char* data;
};

struct sentence {
    struct word* data;
    int word_count;
};

struct paragraph {
    struct sentence* data;
    int sentence_count;
};

struct document {
    struct paragraph* data;
    int paragraph_count;
};

struct document Doc;

void initializeDocument(char* text) {
    // Split the text into paragraphs
    char* paragraphs = strtok(text, "\n");
    Doc.paragraph_count = 0;
    while (paragraphs != NULL) {
        Doc.paragraph_count++;
        paragraphs = strtok(NULL, "\n");
    }

    // Allocate memory for the paragraphs
    Doc.data = (struct paragraph*)malloc(Doc.paragraph_count * sizeof(struct paragraph));

    // Split each paragraph into sentences
    paragraphs = strtok(text, "\n");
    int p = 0;
    while (paragraphs != NULL) {
        char* sentences = strtok(paragraphs, ".");
        Doc.data[p].sentence_count = 0;
        while (sentences != NULL) {
            Doc.data[p].sentence_count++;
            sentences = strtok(NULL, ".");
        }

        // Allocate memory for the sentences in the current paragraph
        Doc.data[p].data = (struct sentence*)malloc(Doc.data[p].sentence_count * sizeof(struct sentence));

        // Split each sentence into words
        sentences = strtok(paragraphs, ".");
        int s = 0;
        while (sentences != NULL) {
            char* words = strtok(sentences, " ");
            Doc.data[p].data[s].word_count = 0;
            while (words != NULL) {
                Doc.data[p].data[s].word_count++;
                words = strtok(NULL, " ");
            }

            // Allocate memory for the words in the current sentence
            Doc.data[p].data[s].data = (struct word*)malloc(Doc.data[p].data[s].word_count * sizeof(struct word));

            // Store the words in the current sentence
            words = strtok(sentences, " ");
            int w = 0;
            while (words != NULL) {
                Doc.data[p].data[s].data[w].data = words;
                words = strtok(NULL, " ");
                w++;
            }
            s++;
            sentences = strtok(NULL, ".");
        }
        p++;
        paragraphs = strtok(NULL, "\n");
    }
}

struct paragraph getParagraph(int p) {
    return Doc.data[p - 1];
}

struct sentence getSentence(int p, int s) {
    return Doc.data[p - 1].data[s - 1];
}

struct word getWord(int p, int s, int w) {
    return Doc.data[p - 1].data[s - 1].data[w - 1];
}

int main() {
    int N;
    scanf("%d", &N);
    char text[100000];
    getchar();
    for (int i = 0; i < N; i++) {
        fgets(text + strlen(text), 100000 - strlen(text), stdin);
    }
    initializeDocument(text);

    int Q;
    scanf("%d", &Q);
    for (int i = 0; i < Q; i++) {
        int query_type, p, s, w;
        scanf("%d", &query_type);
        if (query_type == 1) {
            scanf("%d", &p);
            struct paragraph result = getParagraph(p);
            for (int j = 0; j < result.sentence_count; j++) {
                printf("%s", result.data[j].data[0].data);
                for (int k = 1; k < result.data[j].word_count; k++) {
                    printf(" %s", result.data[j].data[k].data);
                }
                if (j < result.sentence_count - 1) {
                    printf(".");
                }
            }
            printf("\n");
        } else if (query_type == 2) {
            scanf("%d %d", &p, &s);
            struct sentence result = getSentence(p, s);
            printf("%s", result.data[0].data);
            for (int k = 1; k < result.word_count; k++) {
                printf(" %s", result.data[k].data);
            }
            printf("\n");
        } else if (query_type == 3) {
            scanf("%d %d %d", &p, &s, &w);
            struct word result = getWord(p, s, w);
            printf("%s\n", result.data);
        }
    }

    return 0;
}