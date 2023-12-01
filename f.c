#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Assume there's a struct representing a Discord Interaction
typedef struct {
    char command_name[50];
    char user[50];
    int delete_message_days;
    char reason[100];
} DiscordInteraction;

// Function to handle the 'ban' command
void ban(DiscordInteraction* interaction) {
    // Check permissions
    // ...

    // Check delete_message_days
    // ...

    // Perform ban
    printf("Banned %s for %s\n", interaction->user, interaction->reason);
}

int main() {
    // Initialize Discord bot
    // ...

    // Simulate an 'on_ready' event
    printf("Bot is online\n");

    // Simulate a 'ban' command
    DiscordInteraction interaction;
    strcpy(interaction.command_name, "ban");
    strcpy(interaction.user, "example_user");
    interaction.delete_message_days = 2;
    strcpy(interaction.reason, "Violating rules");

    ban(&interaction);

    // Simulate an 'on_message' event
    // ...

    return 0;
}
