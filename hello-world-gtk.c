#include <gtk/gtk.h>
#include <glib/gstdio.h>

static void print_hello(GtkWidget *widget,
             gpointer   data)
{
  g_print("Hello World\n");
}

static void activate(GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget *window;

  window = gtk_application_window_new(app);
  gtk_window_set_title(GTK_WINDOW(window), "Calculator");
  gtk_window_set_default_size(GTK_WINDOW(window), 500, 500);

  gtk_window_present(GTK_WINDOW(window));
}

int main(int    argc,
      char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect(app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run(G_APPLICATION (app), argc, argv);
  g_object_unref(app);

  return status;
}
