import tkinter as tk
from tkhtmlview import HTMLLabel

def display_html_in_tkinter(html_content):
    # Create a Tkinter window
    window = tk.Tk()
    window.title("HTML Display")

    # Create an HTMLLabel to display the HTML content
    html_label = HTMLLabel(window, html=html_content)
    html_label.pack(fill="both", expand=True)

    # Start the Tkinter event loop
    window.mainloop()

if __name__ == "__main__":
    # Example HTML content
    html_content = """
    <!DOCTYPE html>
    <html>
    <head>
        <title>Sample HTML Page</title>
    </head>
    <body>
        <h1>Hello, Tkinter with HTML!</h1>
        <p>This is an example of displaying HTML in Tkinter.&1+1=2$</p>
        <a href="https://www.example.com">Visit Example Website</a>
    </body>
    </html>
    """

    display_html_in_tkinter(html_content)
