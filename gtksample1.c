#include<gtk/gtk.h>

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *box;


    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 400);

    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_widget_get_halign(box, GTK_ALIGN_CENTER);
    gtk_widget_get_valign(box, GTK_ALIGN_CENTER);
    gtk_window_present(GTK_WINDOW(window));
}

int main(int argc, char **argv) {
    printf("Calculator\n");
    GtkApplication *app;
    int status;

    app = gtk_application_new("com.github.calculator", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);
}
